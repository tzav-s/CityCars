#include <stdio.h>
#include <simpio.h>
#include <math.h>


int main ()
{
    long years=0 ,initial_cars ,cars,limit;
    double rate ;

    printf("Dwse ton arxiko arithmo autikinhtwn: ");
    initial_cars=GetLong();
    printf("Dwse ton athsio rythmo ayxhshs:");
    rate=GetReal();
    printf("Dwse to orio: ");
    limit=GetLong();

    cars=initial_cars;
    while (cars <=limit)
    {
        cars=ceil(cars*(1+rate));
        years++;
    }
    printf("%ld\n%ld",years,cars);

    return 0;
}
