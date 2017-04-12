#include<stdio.h>

#define IS_DIGIT(digit) ((0<=digit) && (digit<=9))

int main()
{
    printf("%d\n", IS_DIGIT(5));
    return 0;
}
