#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=1;
    int i=0;
    int maxLiczba = 2020;
    while(suma<maxLiczba){
        suma = suma*2;
        i++;
        if(suma<maxLiczba){
           printf("2 do potegi %d wynosi %d\n", i, suma);
        } else {
            printf("2 do potegi %d jest wieksze od %d poniewaz wynosi %d", i, maxLiczba, suma);
        }

    }

}
