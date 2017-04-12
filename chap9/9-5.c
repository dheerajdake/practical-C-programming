#include<stdio.h>

#define SIZE 6

int array[SIZE] = {12,15,54,98,99,2};

int returnMax(int * arr)
{
    int temp = arr[0];

    for(int a=0; a<SIZE; a++)
    {
        if(arr[a] > temp)
        {
            temp = arr[a];
        }
    }
    return temp;
}

int main()
{
    printf("Max value: %d\n", returnMax(array));
    return 0;
}
