//
// Created by Oleg Bukatchuk on 14/09/2017.
//

#include <stdio.h>

int main()
{

    int num = 7;

    (num % 2 != 0) ? printf("%d is odd\n", num) : printf("%d is even\n", num);

    printf("There %s ", (num == 1) ? "is" : "are");
    printf("%d %s\n", num, (num == 1) ? "apple" : "apples");

    num = 1;

    printf("There %s ", (num == 1) ? "is" : "are");
    printf("%d %s\n", num, (num == 1) ? "apple" : "apples");

    return 0;

}
