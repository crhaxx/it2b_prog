#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int randLen = rand() % (12 - 7 + 1) + 7;

    char *arr = (char *)malloc(randLen * sizeof(char));

    if (arr == NULL) {
        perror("Chyba alokace pameti\n");
        return 1;
    }

    for (int i = 0; i < randLen; i++) {
        arr[i] = rand() % ('}' - '!' - 1) + '!';

        printf("%c", arr[i]);
    }

    free(arr);

    return 0;
}