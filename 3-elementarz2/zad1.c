#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczbaM;
    int suma=0;
    int i = 1;
    printf("podaj liczbe: ");
    scanf("%d", &liczbaM);

        while(suma+i<liczbaM){
            suma= suma+i;
            i++;
        }

    printf("szukane n to %d", i);
}
