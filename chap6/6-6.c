#include<stdio.h>

void payCheck(int hours, int wage)
{
    printf("Hours: %d, Pay per hour: %d\n", hours, wage);

    int extra = 0, normal = 0;

    if(hours > 40){
        extra = hours % 40;
    }

    int pay = (hours - extra) * 1 * wage + extra * 1.5 * wage;

    printf("Pay: %d\n", pay);
}

int main()
{
  payCheck(50, 45);
  return 0;
}
