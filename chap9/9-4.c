#include<stdio.h>

#define SIZE 5

char letters[SIZE] = {'a','e','i','o','u'};

int computeHash(char * l)
{
    int hash = 0;
    for(int a=0; a<SIZE; a++)
    {
        hash += l[a];
    }
    return hash;
}

int main()
{
    printf("Computed hash: %d\n", computeHash(letters));
    return 0;
}
