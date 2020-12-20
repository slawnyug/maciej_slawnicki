#include <stdio.h>
int main() {
    int liczba;
    int pierwsza=1;

    printf("wpisz liczbe: ");
    scanf("%d", &liczba);

    if(liczba>1){

        for(int i=2; i<liczba; i++){
            if(liczba%i==0){
                    pierwsza=0;
            }
        }

        if(pierwsza==1){
            printf("liczba %d JEST liczba pierwsza", liczba);
        } else if(pierwsza==0) {
            printf("liczba %d NIE JEST liczba pierwsza", liczba);
        }
    } else {
        printf("Wpisz liczbe wieksza od 1!", liczba);

    }
return 0;
}
