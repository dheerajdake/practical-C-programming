#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int dMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int returnDays(char * d1, char * d2)
{
    printf("Date1: %s\nDate2: %s\n", d1, d2);

    //mm/dd/yy or mm/dd//yyyy

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

    //calculate days
    int years;
    //95-01
    if(date1[2] <= date2[2]){
        years = date2[2] - date1[2];
    } else {
        years =100 - date1[2] + date2[2];
    }

    int months;
    //09-03
    if(date1[1] <= date2[1]){
        months = date2[1] - date1[1];
    } else {
        months = 12 - date1[1] + date2[1] - 2;  //full months
    }

    for(int a=0; a<months; a++){
        int start = date1[1] + 1;
        int end = date2[1] - 1;

        //TBD
    }

    printf("Years: %d\n", years);

}

int main(int argc, char *argv[])
{
    if(argc != 3){
      printf("Enter past date followed by future date\n");
      exit(0);
    }

    returnDays(argv[1], argv[2]);

    return 0;
}
