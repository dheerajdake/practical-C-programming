#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * fp;

    fp = fopen("test.csv", "r");

    if(fp == NULL) {
    	printf("No file!");
    	exit(0);
    }


    char buf[256];
    int lineCount = 0;
    while(fgets(buf, sizeof(buf), fp)){
        lineCount++;
    }

    printf("Lines: %d\n", lineCount);

    return 0;
}
