#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
    srand(time(NULL));

    int number = rand() % 100;

    printf("%d", number);

    return 0;
}