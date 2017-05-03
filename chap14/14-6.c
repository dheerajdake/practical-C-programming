#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personInfo
{
	char name[20];
	char address[30];
	char other[20];
};

struct personInfo mosaic[10];
int entries = 0; 


void parseLineAndStore(char * line)
{
	if( strncmp(line, "Name:", 5) == 0 ){
		for(int a=5; a<strlen(line); a++) 
		{
			static int index = 0;
			if( line[a] != '\n' && line[a] != ','){
				mosaic[entries].name[index] = line[a];
				index++;
			} else {
				entries++;
				index = 0;
				mosaic[entries].name[index] = line[a];
			}
		}
	}
	else if( strncmp(line, "Address:", 8) == 0 )
	{
		entries = 0;
		for(int a=8; a<strlen(line); a++) 
		{
			static int index = 0;
			if( line[a] != '\n' && line[a] != ','){
				mosaic[entries].address[index] = line[a];
				index++;
			} else {
				entries++;
				index = 0;
				mosaic[entries].address[index] = line[a];
			}
		}
	}
	else if( strncmp(line, "Other:", 6) == 0 )
	{
		entries = 0;
		for(int a=6; a<strlen(line); a++) 
		{
			static int index = 0;
			if( line[a] != '\n' && line[a] != ','){
				mosaic[entries].other[index] = line[a];
				index++;
			} else {
				entries++;
				index = 0;
				mosaic[entries].other[index] = line[a];
			}
		}
	}
}

int main()
{
	FILE * fp;

	fp = fopen("info.txt", "r");

	if( fp == NULL){
		printf("Unable to open the file\n");
		exit(0);
	}

	//read lines
	char * line = NULL;
	size_t len = 0;
	ssize_t read;

	while( (read = getline(&line, &len, fp)) != -1 ) {
		parseLineAndStore(line);
	}

	//print labels
	printf("----- MOSAIC COMMUNITY -----\n");
	for(int a=0; a<entries; a++){
		printf("Name: %s | Address: %s | Other: %s\n", mosaic[a].name, mosaic[a].address, mosaic[a].other);
	}

	return 0;
}