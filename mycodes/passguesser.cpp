#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int guessed = 0;
    char gen_pass[] = "test";

    while (guessed == 0)
    {
        char pass[30];
        printf("\n");
        printf("Enter pass: ");
        scanf("%29s", pass);

        if (strcmp(gen_pass, pass) == 0)
        {
            guessed = 1;
            printf("Uhodnuto\n");
        }
        else
        {

            for (int i = 0; i < strlen(gen_pass); i++)
            {
                printf("%c ", pass[i]);
            }

            printf("\n");

            for (int i = 0; i < strlen(pass); i++)
            {
                if (pass[i] == gen_pass[i])
                {
                    printf("+ ");
                }
                else
                {
                    int found = 0;
                    for (int j = 0; j < strlen(pass); j++)
                    {
                        if (pass[i] == gen_pass[j])
                        {
                            printf("? ");
                            found = 1;
                            break;
                        }
                    }

                    if (found == 0)
                    {
                        printf("- ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}