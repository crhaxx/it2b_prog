#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % ('z' - 'a' + 1) + 'a';
    }

    int index = rand() % (5 - 1 + 1) + 1;

    printf("%c\n", arr[index]);
    return 0;
}