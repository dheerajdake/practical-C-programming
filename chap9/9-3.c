#include<stdio.h>

#define SIZE 10

int array[SIZE] = {1,2,3,5,5,6,7,8,9,896};

int count(int number, int * arr, int length)
{
    int duplicate = 0;

    for(int a=0; a<SIZE; a++)
    {
        if(arr[a] == number)
        {
            duplicate++;
        }
    }

    if(duplicate > 1){
      return duplicate;
    }
}

int main()
{
    int number = 5;
    printf("There are %d occurences of %d\n", count(number, array, SIZE), number);
    return 0;
}
