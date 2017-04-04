#include<stdio.h>
#include<math.h>

#define PI 3.14


int SphereVolume(int radius)
{
	return (4/3)*(PI)*(radius*radius*radius);
}

int main()
{
	printf("Volume: %d\n", SphereVolume(1));
	return 0;
}
