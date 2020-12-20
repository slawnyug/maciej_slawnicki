#include <stdio.h>
#include <stdlib.h>





int main()
{

double funkcja(double bokA,double bokB)
{
  return sqrt(bokA*bokA+bokB*bokB);
}


double trojkatA = funkcja(3.0, 4.0);
double trojkatB = funkcja(5.0, 5.0);
double trojkatC = funkcja(1.0, 6.0);

printf("trojkatA ma %f\ntrojkatB ma %f\ntrojkatC ma %f\n", trojkatA, trojkatB, trojkatC);

    return 0;

}
