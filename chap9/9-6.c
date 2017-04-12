#include<stdio.h>
#include<string.h>

char strn[] = "hello-how";

void findAndReplace(char * str, char symbol)
{
    int len = strlen(str);
    
    for(int a=0; a<len; a++)
    {
        if(str[a] == symbol)
        {
            str[a] = '_';
        }
    }
    printf("Final: %s\n", str);
}

int main()
{
    findAndReplace(strn, '-');
    return 0;
}
