#include <stdio.h>
#include <math.h>

int pytha(int a, int b)
{
    int c = sqrt(a) + sqrt(b);
    return c;
}

int main()
{
    int a, b, c;

    printf("Zadej cislo: ");
    scanf("%d", &a);

    printf("Zadej cislo: ");
    scanf("%d", &b);

    c = pytha(a, b);

    printf("%d, %d, %d", a, b, c);
    return 0;
}