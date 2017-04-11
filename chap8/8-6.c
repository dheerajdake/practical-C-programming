#include<stdio.h>

char *verbose[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int num = 123456;

    int digits[10];

    int indx = 0;

    while(num !=0)
    {
        digits[indx] = num%10;
        num = num / 10;
        indx++;
    }

    for(int i=indx-1; i>=0; i--)
    {
        printf("%s ", verbose[digits[i]]);
    }
    printf("\n");

    return 0;
}
