//
// Created by Oleg Bukatchuk on 13/09/2017.
//

#include <stdio.h>
#include <limits.h>

int main() {
    printf("short int... \tsize: %lu bytes \t", sizeof(short int));
    printf("%d to %d", SHRT_MAX, SHRT_MIN);

    printf("\nlong int... \tsize: %lu bytes \t", sizeof(long int));
    printf("%ld to %ld", LONG_MAX, LONG_MIN);

    printf("\nchar... \tsize: %d bytes \n", sizeof(char));
    printf("float... \tsize: %d bytes \n", sizeof(float));
    printf("double... \tsixe: %d bytes \n", sizeof(double));

    return 0;
}