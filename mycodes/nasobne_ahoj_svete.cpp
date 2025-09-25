#include <stdio.h>

int main() {
    int count;

    printf("Zadej pocet: ");
    scanf("%d", &count);

    if (count < 0) {
        perror("Neplatny vstup");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        printf("Ahoj svete!\n");
    }
    
    return 0;
}