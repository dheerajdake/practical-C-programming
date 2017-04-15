#include<stdio.h>

int num[10] = {1,2,3,4,5,6,7,8,9,15};

int main()
{
    int * a = (int *)&num;

    for(int e=0; e<10; e++){
        *a=0;
        *a++;
    }
    

    for(int a=0; a<10; a++){
      printf("%d ", num[a]);
    }

    return 0;
}
