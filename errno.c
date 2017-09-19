//
// Created by Oleg Bukatchuk on 19/09/2017.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *f_ptr;
    int i;

    f_ptr = fopen("nosuch.file", "r");

    if (f_ptr != NULL) {
        printf("File opened\n");
    }
    else {
        perror("Error");
    }

    for (i = 0; i < 100; i++) {
        printf("%s : %d\n", strerror(i));
    }

    return 0;
}
