#include <stdio.h>

void kresli(int vyska)
{
    for (int i = 0; i < vyska; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}

int main()
{
    int userI;
    printf("Zadej vysku: ");
    scanf("%d", &userI);

    kresli(userI);

    return 0;
}