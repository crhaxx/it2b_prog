#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("String: ");
    scanf("%s", str);

    for (int i = 0; strlen(str) > i; i++)
    {
        if (str[i] > str[strlen(str) - 1 - i])
        {
            printf("Neni palindrom");
            return 0;
        }
    }

    printf("Je palindrom");

    return 0;
}