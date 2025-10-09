#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int nejcastejsi[5];
    int soucet = 0;
    int nejlepsi = 6;
    int nejhorsi = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % (5 - 1 + 1) + 1;
        printf("%d, ", arr[i]);

        soucet += arr[i];

        nejcastejsi[i]++;

        if (nejlepsi > arr[i]) nejlepsi = arr[i];
        if (nejhorsi < arr[i]) nejhorsi = arr[i];
    }

    printf("\n");

    int prumer = soucet / 10;

    printf("prumer: %d\n nejlepsi: %d\n nejhorsi: %d\n\n", prumer, nejlepsi, nejhorsi);

    return 0;
}