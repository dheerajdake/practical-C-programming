#include<stdio.h>

float kmphtomph(float kmph)
{
	return kmph*0.6213712;
}

int main()
{
	printf("MPH: %2.2f\n", kmphtomph(10));
	return 0;
}
