#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
    srand(time(NULL));

    float x;
    float y;

    int r = 0;
    int b = 0;

    for (int i = 0; i < 100000; i++) {
        x = (float) rand() / RAND_MAX;
        y = (float) rand() / RAND_MAX;

        if (x*x + y*y < 1) {
            r++;
        } else {
            b++;
        }
    }

    int n = r + b;

    float pi = (float) 4*r / n;

    printf("%f", pi);

    return 0;
}