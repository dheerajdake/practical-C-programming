#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SPACER 3

int main()
{

    FILE * fp, * fp2;
    fp = fopen("tabs.txt","r");
    
    if(fp == NULL){
    	printf("No file!");
        exit(0);
    }
    
    char spc = ' ';
    char * a = malloc(sizeof(char)*10);
    *a = fgetc(fp);

    fp2 = fopen("tabs_copy.txt", "w");

    while(*a != EOF){
	if(*a == '\t')
	{
	    for(int f=0; f<SPACER; f++)
    	    {
		fwrite(&spc, 1, 1, fp2);	
	    }	
	}
	else
	{
	   fwrite(a, 1, 1, fp2);
	}
        *a = fgetc(fp); 
    }

    return 0;
}
