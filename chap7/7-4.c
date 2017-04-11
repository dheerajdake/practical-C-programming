#include<stdio.h>

int addTax(int total)
{
    total += total * 0.08;
    return total;
}

int main()
{
    printf("With tax: %d\n", addTax(25));
    return 0;
}
