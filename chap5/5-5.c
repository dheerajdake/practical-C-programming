#include<stdio.h>

int minutes(int hours, int minutes)
{
	return hours*60 + minutes;
}

int main()
{
	printf("Minutes: %d\n", minutes(1,30));
	return 0;
}
