#include<stdio.h>

#define TABLELEN 20

void printTable(int num)
{
    for(int a=1; a<TABLELEN+1; a++)
    {
        printf("%d x %d = %d\n", num, a, num*a);
    }
}

int main()
{
    printTable(8);
    return 0;
}
