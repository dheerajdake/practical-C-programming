#include<stdio.h>
#include<stdlib.h>

struct rectangle *areaR, *perimeterR;

struct rectangle
{
  float (*calc)(float length, float width);
};

float area(float length, float width) {
  return length*width;
}

float perimeter(float length, float width) {
  return 2*(length+width);
}

int main()
{
  //allocate memory
  areaR = malloc(sizeof(struct rectangle));
  perimeterR = malloc(sizeof(struct rectangle));

  //assign pointers
  areaR->calc = &area;
  perimeterR->calc = &perimeter;

  //call fns
  printf("Area 1: %0.2f\n", areaR->calc(5,3));
  printf("Area 2: %0.2f\n", perimeterR->calc(2.3,6.8));

  //free memory
  free (areaR);
  free (perimeterR);

  return 0;
}
