//
// Created by Oleg Bukatchuk on 15/09/2017.
//

#include <stdio.h>

int main()
{
    int x = 10, y = 5;
    printf("\nx = %d y = %d\n", x, y);

    x = x ^ y; /* 1010 ^ 0101 = 1111 (15) */
    y = x ^ y; /* 1111 ^ 0101 = 1010 (10) */
    x = x ^ y; /* 1111 ^ 1010 = 0101 (5) */

    printf("\nx = %d y = %d\n", x, y);

    return 0;
}
