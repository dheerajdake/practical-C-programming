#include <stdio.h>

float average(int num)
{
    int sum = 0;
    for(int a=0; a<num; a++)
    {
        sum += a;
    }

    return (float)sum/num;
}

int main()
{
    int num = 10;
    printf("Average of first %d numbers is %0.2f\n", num, average(num));
}
