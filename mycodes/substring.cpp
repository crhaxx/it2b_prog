#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    char substr[15];
    int substrCount = 0;

    printf("Zadej str: ");
    scanf("%14s", str);
    printf("Zadej substr: ");
    scanf("%14s", substr);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == substr[0])
        {
            printf("Podretezec nalezen.\n");
            return 0;
        }
    }

    printf("Podretezec nenalezen.\n");
    return 0;
}