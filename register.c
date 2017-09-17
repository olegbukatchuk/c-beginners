//
// Created by Oleg Bukatchuk on 13/09/2017.
//

#include <stdio.h>

int main() {
    register int num = 0;

    while (num < 5) {
        ++num;
        printf("Pass %d \n", num);
    }

    return 0;
}
