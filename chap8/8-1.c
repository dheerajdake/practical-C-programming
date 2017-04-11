#include<stdio.h>

#define ROWS 8
#define COLS 8

#define LEN 5
#define WID 3

const char intersections = '+';
const char wall = '|';
const char rowSpacers = '-';
const char colSpacers = ' ';

void printCheckerBoard(int rows, int cols)
{

      //repeat  loop
      for(int f=0; f<rows; f++){

        //draws +----+ pattern
        printf("%c", intersections);
        for(int a=0; a<rows; a++)
        {
            for(int b=0; b<LEN; b++)
            {
              printf("%c", rowSpacers);
            }
            printf("%c", intersections);
        }
        printf("\n");

        //repeat loop
        for(int e=0; e<WID; e++)
        {
          //draws pattern
          printf("%c", wall);
          for(int c=0; c<cols; c++)
          {
              for(int d=0; d<LEN; d++)
              {
                printf("%c", colSpacers);
              }
              printf("%c", wall);
          }
            printf("\n");
        }
      }//end of pattern

      //draws finisher pattern
      printf("%c", intersections);
      for(int a=0; a<rows; a++)
      {
          for(int b=0; b<LEN; b++)
          {
            printf("%c", rowSpacers);
          }
          printf("%c", intersections);
      }
      printf("\n");
}

int main()
{
    printCheckerBoard(ROWS, COLS);
    return 0;
}
