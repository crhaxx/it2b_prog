#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Zadej text: ");
    scanf("%19s", str);

    int num = 1;

    while (num < strlen(str) + 1)
    {
        if (num % 2 == 0 && num != 0)
        {
            printf("Podminka: %d, %d \n", num % 2, num);
            str[num - 1] = '#';
        }

        printf("Konec \n");

        num++;
    }

    printf("Vysledek: %s", str);
}