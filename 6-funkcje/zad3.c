#include <stdio.h>
#include <stdlib.h>


int main()
{

    int doskonala(liczba){

        int suma=0;
        int i = liczba/2;

            while(i>0){
                if(liczba%i == 0){
                    suma = suma+i;
                }
                i--;
            }

            if (suma==liczba){
                printf("%d\n", suma);
            }

    }

    for(int i=1; i<1000; i++){
        doskonala(i);
    }




    }


