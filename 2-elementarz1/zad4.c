#include <stdio.h>

int main() {
    int liczba=5;
    int suma=1;
    for(int i=1; i<liczba; i++){
        suma = suma+(suma*i);
    }
    printf("silnia z liczby %d rowna sie %d", liczba, suma);




    return 0;
}
