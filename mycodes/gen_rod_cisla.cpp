#include <stdio.h>

int errorCheck(int year, int month, int day, char gender, int sufix) {
    int result = 0;

    if (year < 1900 || year > 2025) {
        perror("Neplatny rok\n");
        result++;
    }

    if (month > 12 || month < 0) {
        perror("Neplatny mesic\n");
        result++;
    }

    if (day > 31 || day < 0) {
        perror("Neplatny den\n");
        result++;
    }

    if (gender != 'M' || gender != 'Z') {
        perror("Neplatny gender\n");
        result++;
    }

    if (sufix > 9999 || sufix < 0000) {
        perror("Neplatna koncovka\n");
        result++;
    }

    return result;
}

int main() {
    struct {
        int year, month, day; // YEAR MONTH DAY
    } birth;
    
    char gender = 'Z'; // M / Z
    int sufix = 20;

    scanf("%d", &birth.year);
    scanf("%d", &birth.month);
    scanf("%d", &birth.day);

    scanf(" %c", &gender);
    scanf("%d", &sufix);

    int check = errorCheck(birth.year, birth.month, birth.day, gender, sufix);

    if (check > 0) {
        printf("Nasel jsem: %d chyb\n", check);
        return 1;
    }

    if (birth.year >= 2000) {
        birth.year -= 2000;
    } else if (birth.year <= 2000) {
        birth.year -= 1900;
    } else {
        perror("Neplatny vstup");
        return 1;
    }
    
    if (gender == 'Z') birth.month += 50;

    printf("%d%d%d/%d", birth.year, birth.month, birth.day, sufix);
}

