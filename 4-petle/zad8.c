#include <stdio.h>
#include <stdlib.h>

int main()
{

int liczba = 1;
        for (int i=0; i<4; i++){

            for (int i=0; i<liczba; i++){
            putchar('*');
            }
            printf("\n");
            liczba++;

        }

liczba=4;
printf("\n");

        for (int i=0; i<4; i++){

            for (int i=0; i<liczba; i++){
            putchar('*');
            }
            printf("\n");
            liczba--;

        }

printf("\n");
int gwiazdy=4;
int spacje=0;

        for (int i=0; i<4; i++){
           for (int i=0; i<spacje; i++){
            putchar(' ');
           }
           for (int i=0; i<gwiazdy; i++){
            putchar('*');
           }
           printf("\n");
           gwiazdy--;
           spacje++;

        }

printf("\n");
gwiazdy=1;
spacje=3;

        for (int i=0; i<4; i++){
           for (int i=0; i<spacje; i++){
            putchar(' ');
           }
           for (int i=0; i<gwiazdy; i++){
            putchar('*');
           }
           printf("\n");
           gwiazdy++;
           spacje--;

        }






}
