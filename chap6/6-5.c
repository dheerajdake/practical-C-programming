#include<stdio.h>
#include<stdbool.h>

bool isLeapYear(int year)
{
  if(year % 400 == 0 || (year % 4 == 0 && year % 100 !=0))
    return 1;
  else
    return 0;

}

int main()
{
  int year = 2000;

  printf("%s\n", isLeapYear(year) ? "YES" : "NO");

  return 0;
}
