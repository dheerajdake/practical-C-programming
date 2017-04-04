#include<stdio.h>

#define HEIGHT 7
#define WIDTH  5

int main()
{
  //print HELLO in big letter format

  //print H
  for(int h=0; h<HEIGHT; h++){
    if(h == 3){ //middle line
      printf("*****");
    } else {
      printf("*   *");
    }
    printf("\n");
  }

  //print E
  for(int h=0; h<HEIGHT; h++) {
    if(h%3 == 0) {
      for(int w=0; w<WIDTH-1; w++) {
        printf("*");
      }
    }
    printf("*\n");
  }

  //print 2 L's
  for(int c=0; c<2; c++){
  for(int h=0; h<HEIGHT; h++){
    printf("*\n");
    if(h == HEIGHT-2){
      for(int w=0; w<WIDTH-1; w++){
        printf("*");
      }
    }
  }
  }

  //print O's
  for(int h=0; h<HEIGHT; h++){
    if(h == 0 || h == HEIGHT-1){
      for(int w=0; w<WIDTH; w++){
        printf("*");
      }
    } else {
        printf("*   *");
    }
    printf("\n");
  }

  return 0;
}
