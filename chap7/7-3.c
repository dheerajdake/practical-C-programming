#include<stdio.h>

#define BAUDRATE 960
#define FILESIZE 419430400

unsigned long ETL(unsigned long fileSize)
{
    return FILESIZE/BAUDRATE;
}

int main()
{
    unsigned long ETA = ETL(FILESIZE);
    unsigned long time;
    char units[10];

    if(ETA >= 24*60*60) //days
    {
        time = ETA/(24*60*60);
        sprintf(units, "days");
    }
    else if( 24*60*60 > ETA &&  60*60 <= ETA)
    {
        time = ETA/60*60;
        sprintf(units, "hours");
    }
    else if( 60*60 > ETA && 0 <= ETA)
    {
        time = ETA/60;
        sprintf(units, "seconds");
    }


    printf("ETA: %lu %s\n", time, units);
    return 0;
}
