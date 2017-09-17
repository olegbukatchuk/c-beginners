//
// Created by Oleg Bukatchuk on 13/09/2017.
//

#include <stdio.h>

static int sum = 100;

int main() {
    extern int sum;
    printf("Sum id %d \n", sum);

    extern int num;
    printf("Num is %d \n", num);

    return 0;
}
