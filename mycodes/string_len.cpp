#include <stdio.h>

int main()
{
    char str[11];

    printf("Zadej string (max 10): ");
    scanf("%s", &str);

    int num = 0;

    while (str[num] != '\0')
    {
        num++;
    }

    printf("Delka je: %d", num);
}