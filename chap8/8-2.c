#include<stdio.h>

float resistanceParallel(int r1, int r2)
{
    return (float)(r1*r2)/(r1+r2);
}

int main()
{
    float resistance = resistanceParallel(400, 200);
    printf("R = %.2f ohms\n", resistance);
}
