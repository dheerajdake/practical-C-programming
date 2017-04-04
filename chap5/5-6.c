#include<stdio.h>

void calcTime(int minutes)
{
	int hrs = minutes/60;
	int min = minutes%60;

	printf("Time: %dH %dM\n", hrs, min);
}

int main()
{
	calcTime(90);
	return 0;
}
