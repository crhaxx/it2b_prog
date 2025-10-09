#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int soucet;

    int pocetKostek;
    printf("Zadej pocet kostek: ");
    scanf("%d", &pocetKostek);

    int pocetSten;
    printf("Zadej pocet sten: ");
    scanf("%d", &pocetSten);

    printf("Hody: ");

    int random;

    for (int i = 0; i < pocetKostek; i++) {
        random = rand() % (pocetSten - 1 + 1) + 1;
        printf("%d ", random);
        soucet += random;
    }

    printf("\n");

    printf("Soucet: %d", soucet);

    return 0;
}