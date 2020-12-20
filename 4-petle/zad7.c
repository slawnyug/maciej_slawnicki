#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[6];
    int dodatnie = 0;

    scanf("%d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);

        for (int i=0; i<6; i++){
            if(tablica[i]>=0){
                dodatnie=dodatnie+1;
            }
        }


        printf("liczba liczb dodatnich wynosi: %d", dodatnie);

}
