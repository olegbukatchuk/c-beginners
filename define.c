//
// Created by Oleg Bukatchuk on 14/09/2017.
//

#include <stdio.h>

#define LINE "_____________________"
#define TITLE "C Programming in easy steps"
#define AUTHOR "Oleg Bukatchuk"

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif

#ifdef __APPLE__
#define SYSTEM "macOS"
#endif

int main() {
    printf("\n \t %s \n \t %s \n", LINE, TITLE);
    printf("\t by %s \n \t %s \n", AUTHOR, LINE);
    printf("\n Operating System: %s \n", SYSTEM);

    return 0;
}

