#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char str2[20];

    printf("Zadej slovo: ");
    scanf("%19s", str);
    printf("Zadej slovo 2: ");
    scanf("%19s", str2);

    int i = 0;
    while (i < strlen(str))
    {
        if (str[i] != str2[i] || strlen(str) != strlen(str2))
        {
            printf("Slova nejsou stejna");
            return 0;
        }
        i++;
    }

    printf("Slova jsou stejna");

    return 0;
}