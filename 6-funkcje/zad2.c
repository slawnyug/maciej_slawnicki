#include <stdio.h>
#include <stdlib.h>

int main()
{

    int silnia(liczba){
        int suma=1;
        for(int i=1; i<liczba+1; i++){
            suma = suma*i;
        }
        printf("silnia z %d to %d", liczba, suma);
    }

    silnia(1);


}
