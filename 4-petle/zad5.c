#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[6];

    scanf("%d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);

    for(int i=0; i<6; i++){
        printf("%d", tablica[i]);
    }

    printf("\n");

    for(int i=5; i>-1; i--){
        printf("%d", tablica[i]);
    }


}
