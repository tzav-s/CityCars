#include <stdio.h>
#include <simpio.h>
#include <math.h>

#define Initial_cars 80000
#define rate 0.07
#define limit 160000

int main ()
{
    long years=0 ,cars=Initial_cars ;
    while (cars <=limit)
    {
        cars=ceil(cars*(1+rate));
        years++;
    }
    printf("%ld\n%ld",years,cars);

    return 0;
}
