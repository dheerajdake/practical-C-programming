#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isPrime(int num)
{
    if(num == 2)
    {
       return true;
    }
    else if (num < 2)
    {
       printf("Invalid request");
       exit(0);
    }

    for(int a=2; a<num; a++)
    {
        if( num%a == 0)
        {
          return false;
        }
    }
    return true;
}

int main()
{
    int num = 0;
    printf("%d %s prime\n", num, isPrime(num)?"is":"is not");
}
