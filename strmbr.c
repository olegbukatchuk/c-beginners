//
// Created by Oleg Bukatchuk on 18/09/2017.
//

#include <stdio.h>

typedef struct {
    char str[5];
} ArrType;

typedef struct {
    char *str;
} PrtType;

ArrType arr = {'B', 'a', 'd', ' ', '\0'};
PrtType ptr = {"Good"};

int main() {
    printf("\nArray string is a %s", arr.str);

    arr.str[0] = 'I';
    arr.str[1] = 'd';
    arr.str[2] = 'e';
    arr.str[3] = 'a';
    arr.str[4] = '\0';

    printf("\nPointer string is a %s", ptr.str);
    ptr.str = "Idea";
    printf("%s\n", ptr.str);

    return 0;
}
