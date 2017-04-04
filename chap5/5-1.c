#include<stdio.h>

float CtoF(float tempC)
{
	//F = 9/5c + 32;
	//c = 5/9(F-32);
	return (9*(tempC))/5 + 32;
}

int main()
{
	printf("F: %2.2f\n", CtoF(0));
	return 0;
}
