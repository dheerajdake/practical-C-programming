#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isVowel(char alph)
{
    if( ('a' <= alph && alph <= 'z') || ('A' <=alph && alph <= 'Z') )
    {
        if(alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        printf("Invalid request\n");
        exit(0);
    }
}

int main()
{
    char a = 'u';
    printf("%c is %s\n", a, isVowel(a)?"vowel":"consonant");
    return 0;
}
