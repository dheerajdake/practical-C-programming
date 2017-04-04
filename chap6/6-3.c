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

char gradeModifier(int marks)
{
		int modifier = marks % 10;

		if(1<=modifier && modifier<=3)
			return '-';
		else if(modifier == 8 || modifier == 9 || modifier == 0)
			return '+';
}

int main()
{
	int marks = 99;
	printf("Grade: %c", printGrades(marks));
	printf("%c\n", gradeModifier(marks));
	return 0;
}
