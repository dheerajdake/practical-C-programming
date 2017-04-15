#include<stdio.h>

int main()
{
    for(int a=0; a<7; a++)
    {
       if(a == 3)
       {
          printf(".     .");
       }
       else{
        for(int b=0; b<7; b++)
        {
              printf("%c", '.');
        }
      }
      printf("\n");

    }
    return 0;
}
