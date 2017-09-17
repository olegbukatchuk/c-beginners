//
// Created by Oleg Bukatchuk on 18/09/2017.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void itoa(int value, char* str, int base);
void strreverse(char* begin, char* end);

int main() {
    int n1, n2, n3;
    char s1[10] = "12eight", s2[10] = "-65.8", s3[10] = "x13";

    n1 = atoi(s1);
    printf("\nString %s converts to Integer: %d\n", s1, n1);

    n2 = atoi(s2);
    printf("\nString %s converts to Integer: %d\n", s2, n2);

    n3 = atoi(s3);
    printf("\nString %s converts to Integer: %d\n\n", s3, n3);

    itoa(n1, s1, 2);
    printf("Decimal %d is Binary: %s\n", n1, s1);

    n2 = sprintf(s3, "%o", n1);
    printf("Decimal %d is Octal: %s chars: %d\n", n1, s3, n2);

    n3 = sprintf(s3, "%x", n1);
    printf("Decimal %d is Hexadecimal: %s chars: %d\n", n1, s3, n3);

    return 0;
}

void strreverse(char* begin, char* end) {

    char aux;

    while(end>begin)

        aux=*end, *end--=*begin, *begin++=aux;

}

void itoa(int value, char* str, int base) {

    static char num[] = "0123456789abcdefghijklmnopqrstuvwxyz";

    char* wstr=str;

    int sign;

    if (base<2 || base>35) {
        *wstr='\0';
        return;
    }

    if ((sign=value) < 0) value = -value;

    do *wstr++ = num[value%base];
    while(value/=base);

    if(sign<0) *wstr++='-';

    *wstr='\0';

    strreverse(str,wstr-1);

}