//
// Created by Oleg Bukatchuk on 18/09/2017.
//

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file_ptr;
    char text[50];

    file_ptr = fopen("farewell.txt", "r+a");

    if (file_ptr != NULL) {
        printf("File farewell.txt opened\n");

        while (fgets(text, 50, file_ptr)) {
            printf("%s", text);
        }

        printf("\n");
        strcpy(text, "...by Lord Alfred Tennyson");
        fputs(text, file_ptr);
        fclose(file_ptr);

        return 0;
    }
    else {
        printf("Unable to open file\n");

        return 1;
    }
}