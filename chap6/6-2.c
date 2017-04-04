#include<stdio.h>

char printGrades(int marks)
{
	if(0<=marks && marks<=60)
		return 'F';
	else if(61<=marks && marks<=70)
		return 'D';
	else if(71<=marks && marks<=80)
		return 'C';
	else if(81<=marks && marks<=90)
		return 'B';
	else if(91<=marks && marks<=100)
		return 'A';
}

int main()
{
	printf("Grade: %c\n", printGrades(99));
	return 0;
}
