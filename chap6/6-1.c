#include<stdio.h>
#include<math.h>

int distanceSquared(int x1, int y1, int x2, int y2)
{
	return ((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
}

int main()
{
	printf("Distance squared: %d\n", distanceSquared(5,9,5,2));   
	printf("Distance: %2.2f\n", sqrt(distanceSquared(5,9,5,2)));       
	return 0;
}
