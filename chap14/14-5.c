#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * fp1, *fp2;

    fp1 = fopen("numbers.txt","r");

    if(fp1 == NULL){
      printf("Error opening file");
      exit(0);
    }

    //copy file
    fp2 = fopen("highbits.txt", "w");

    char * c = malloc(sizeof(char)); //holds a character

    *c = fgetc(fp1);

    while( *c != EOF ){
    	if( *c != 0x13 && (*c&0x80 != 0) ){
    		    	printf("%c", *c );

    		fwrite(c, sizeof(char), 1, fp2);
    	}
    	*c = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    free(c);

	return 0;
}