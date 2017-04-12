#include<stdio.h>

#define ISDIVBY10(num) ((num%10==0)?1:0)

int main()
{
    printf("%d\n", ISDIVBY10(96));
    return 0;
}
