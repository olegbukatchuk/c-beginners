//
// Created by Oleg Bukatchuk on 18/09/2017.
//

#include <stdio.h>

struct coords {
    int x;
    int y;
} point;

struct coords top;

int main() {
    point.x = 5; point.y = 8;
    top.x = 15; top.y = 24;

    printf("\npount.x: %d, point.y: %d", point.x, point.y);
    printf("\ntop.x: %d, top.y: %d\n\n", top.x, top.y);

    return 0;
}