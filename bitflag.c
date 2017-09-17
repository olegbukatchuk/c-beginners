//
// Created by Oleg Bukatchuk on 15/09/2017.
//

#include <stdio.h>

int main()
{
    int flags = 8; /* Двоичное представление 1000 */

    flags = flags | 2; /* 1000 | 0010 = 1010 (Десятичное число 10) */

    printf("Flags 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
    printf("Flags 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
    printf("Flags 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
    printf("Flags 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");

    char mask = 15; /* Двоичное представление 00001111 */
    flags = ~flags & mask; /* ~(1010 & 111 = 1010) = 0101 */

    printf("Flags 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF" );
    printf("Flags 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF" );
    printf("Flags 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF" );
    printf("Flags 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF" );
    printf("Flags decimal value is %d\n", flags);

    flags = flags << 1; /* 0101 << 1 = 1010 */
    printf("Flags decimal value is now %d\n", flags);

    return 0;
}