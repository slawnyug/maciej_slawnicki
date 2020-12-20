#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    int suma = 0;
    printf("Podaj lcizbe 1 lub wieksza: ");
    scanf("%d", &liczba);

    if(liczba<1){
        printf("%d jest mniejsza od 1", liczba);
    } else {
        for(int i=1; i<liczba+1; i++){
            suma = suma+i;


        }

        printf("suma od 1 do %d wynosi %d", liczba, suma);
    }


}
