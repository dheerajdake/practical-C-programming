#include<stdio.h>

void categorizeMoney(float money)
{
  //quarters, dimes, nickels and pennies
  int cents = money*100;
  int quarters = cents / 25;
  int change = cents % 25;

  int dimes = change /10;
  change = change %10;

  int nickels = change / 5;
  change = change%5;

  int pennies = change / 1;

  printf("Q: %d, D: %d, N:%d, P: %d\n", quarters, dimes, nickels, pennies);
}

int main()
{
  float money = 0.88; //cents

  categorizeMoney(money);

  return 0;
}
