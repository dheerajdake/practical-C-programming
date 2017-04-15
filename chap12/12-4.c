#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//list planes departing from 2 airports
#define FLIGHTS 3

struct airlineReservation
{
    char flightNumber[10];
    char originAirportCode[3];
    char destinationAirportCode[3];
    char startTime[10];
    char arrivalTime[10];
};

struct airlineReservation US[FLIGHTS];

int main(int argc, char *argv[])
{
    if(argc<3){
      printf("Enter origin and destination airport codes\n");
      exit(0);
    }

    sprintf(US[0].flightNumber, "%s", "ASA124584");
    sprintf(US[0].originAirportCode, "%s", "LAX");
    sprintf(US[0].destinationAirportCode, "%s", "CHG");
    sprintf(US[0].startTime, "%s", "14:00");
    sprintf(US[0].arrivalTime, "%s", "19:00");

    sprintf(US[1].flightNumber, "%s", "PWER22345");
    sprintf(US[1].originAirportCode, "%s", "LAX");
    sprintf(US[1].destinationAirportCode, "%s", "CHG");
    sprintf(US[1].startTime, "%s", "17:00");
    sprintf(US[1].arrivalTime, "%s", "03:00");

    for(int a=0; a<FLIGHTS; a++){
      if( (strncmp(US[a].originAirportCode, argv[1], 3) == 0) && (strncmp(US[a].destinationAirportCode, argv[2], 3) == 0) ){
          char buf[10];
          memset(buf,0,sizeof(buf));
          memcpy(buf, US[a].flightNumber, sizeof(buf));
          printf("Airplane: %s\n", buf);
      }
    }

    return 0;
}
