#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc<2){
        printf("Enter a string\n");
        exit(0);
    }

    char *p = argv[1];

    int len = strlen(argv[1]);

    for(int a=0; a<len; a++){
        if(*p == ' '){
          p++;
        }else{
          break;
        }
    }

    printf("Str: %s\n", p);

    return 0;
}
