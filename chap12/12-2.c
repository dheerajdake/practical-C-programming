#include<stdio.h>
#include<stdint.h>

typedef struct timeAndDate
{
    uint8_t hours, minutes, seconds;
    uint8_t day, month;
    uint32_t year;
}timeAndDate;

timeAndDate USA, BZA;

long secs(timeAndDate t1, timeAndDate t2){
    //t2 is future and t1 is present
    int s = t2.seconds + 60 - t1.seconds;

    int m = t2.minutes + 60 - t1.minutes;

    int h = t2.hours - t1.hours;
    if(h<0){
      h = h*-1;
    }

    return (s + m * 60 + h * 24 * 60);
}

int main(){

    //24 hour format
    USA.hours = 15;
    USA.minutes = 45;
    USA.seconds = 16;

    BZA.hours = 20;
    BZA.minutes = 55;
    BZA.seconds = 44;

    USA.day = 15;
    USA.month = 4;
    USA.year = 2017;

    printf("USA: %d:%d:%d - %d/%d/%d\n", USA.hours, USA.minutes, USA.seconds, USA.month, USA.day, USA.year);
    long s = secs(USA, BZA);
    printf("Secs: %lu\n", s);
    return 0;
}
