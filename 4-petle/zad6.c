#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[6];
    int najwieksza = 0;
    int najmniejsza = 99999;

    scanf("%d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);

        for (int i=0; i<6; i++){
            if(tablica[i]>najwieksza){
                najwieksza = tablica[i];
            }
        }
        for (int i=0; i<6; i++){
            if(tablica[i]<najmniejsza){
                najmniejsza = tablica[i];
            }
        }
        printf("najwieksza liczba to: %d\nnajmniejsza liczba to: %d", najwieksza, najmniejsza);

}
