#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//need to add days and cases

int dMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int returnDays(char * d1, char * d2)
{
    int years, months, days;

    printf("Date1: %s\nDate2: %s\n", d1, d2);

    //mm/dd//yyyy

    int date1[3], date2[3];
    /**
    * index 0 : month
    * index 1 : date
    * index 2 : year
    **/

    char * p1 = strtok(d1, "/");
    while(p1 != NULL){
        static int index = 0;
        date1[index] = atoi(p1);
        p1 = strtok(NULL, "/");
        index++;
    }

    char * p2 = strtok(d2, "/");
    while(p2 != NULL){
        static int index = 0;
        date2[index] = atoi(p2);
        p2 = strtok(NULL, "/");
        index++;
    }

    for(int a=0; a<3; a++){
      printf("%d %d\n", date1[a], date2[a]);
    }

    //calculate years
    int diffYears = date2[2] - date1[2];

    //calculate months
    if(diffYears == 0) {
      if(date2[0] - date1[0] >=2) {
          months = date2[0] - date1[0];
      }
      else if(date2[0] - date1[0] == 1)
      {
          //4/1/17 - 5/31/17
          //find out days between months = 30 - 4 + 31
          int daysBetweenSuccessiveMonths = dMonth[date1[0]+1] - date1[1] + date2[1];
          months = daysBetweenSuccessiveMonths%30;
      }
      else if(date2[0] - date1[0] == 0)
      {
          months = 0;
      }
      years = 0;
    }
    else if (diffYears == 1)  //1/1/16 - 31/12/17
    {
        if(date1[0] == 12 && date2[0] == 1){
            months = 0;
        }
        else
        {
          months = 12 - date1[0] + date2[0];
        }
        years = months/12;
        months = months%12;
    }
    else if (diffYears >= 2)
    {
        months = 12 - date1[0] + date2[0] - 2;
        years = diffYears-1;
    }
    else if (diffYears < 0)
    {
        //1/1/99-1/1/02
        //handle this later
    }

    //adjustments


  printf("Years: %d, months: %d\n", years, months);
  return 0;
}

int main(int argc, char *argv[])
{
    if(argc != 3){
      printf("Enter past date followed by future date\n");
      exit(0);
    }

    int days = returnDays(argv[1], argv[2]);
  //  printf("Days elapsed: %d\n", days);
    return 0;
}
