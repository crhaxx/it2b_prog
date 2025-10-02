#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	// nastav strany a preference
    int pocet_stran = 8;
    char strany[][14] = { "ANO", "SPOLU", "SPD", "STAN", "Piráti", "Motoristé", "Stačilo", "Jiné" };
    float preference[] = { 29.3, 20.5, 13.4, 11.1, 10, 6, 5.5, 4.2 };
    int hlasy[] = { 0, 0, 0, 0, 0, 0, 0, 0};
    int pocet_volicu = 100000;
    int procento_volicu = 100000;

    srand(time(NULL));

    procento_volicu = rand() % (80 - 50 + 1) + 50;

    pocet_volicu = pocet_volicu / 100 * procento_volicu;

	// TO DO:
		// - gneeruj nahodne hlasy
		// - zobraz vysledky 

    for (int i = 0; i < pocet_volicu; i++) {
        int randomStrana = rand() % (pocet_stran);

        hlasy[randomStrana]++;
    }

	// Vypis strany
	for (int i = 0; i < pocet_stran; i++) {
		printf("%s - %d hlasu\n", strany[i], hlasy[i]);
	}


    return 0;
}
