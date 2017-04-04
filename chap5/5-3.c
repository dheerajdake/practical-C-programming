#include<stdio.h>

int rectanglePerimeter(int l, int b)
{
	return 2*(l+b);
}


int main()
{
	printf("Perimeter: %d\n", rectanglePerimeter(5,3));
	return 0;
}
