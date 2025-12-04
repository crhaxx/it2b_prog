#include <stdio.h>

int vypocetObvodu(int delkaStrany)
{
    return delkaStrany * 4;
}

int main()
{
    int delkaStrany;

    printf("Delka: ");
    scanf("%d", &delkaStrany);

    int obvod = vypocetObvodu(delkaStrany);

    printf("%d", obvod);
    return 0;
}