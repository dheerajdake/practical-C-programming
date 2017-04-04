#include<stdio.h>

#define HEIGHT 7
#define WIDTH  5
int main()
{
  //height 7 and width 5

  for(int h=0; h<HEIGHT; h++) {
    if(h%3 == 0) {
      for(int w=0; w<WIDTH-1; w++) {
        printf("*");
      }
    }
    printf("*\n");
  }

  return 0;
}
