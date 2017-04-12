#include<stdio.h>

#define IS_DIGIT(digit) ((0<=digit) && (digit<=9))
#define IS_HEX(digit) ( (IS_DIGIT(digit)) || (('A' < digit) && (digit < 'F')) || (('a' < digit) && (digit < 'f')) )

int main()
{
    printf("%d\n", IS_HEX('d'));
    return 0;
}
