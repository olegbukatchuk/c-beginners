#include <stdio.h>

int main() {
  int i, j, flag = 1;

  for (i = 1; i < 4; i++) {
    for (j = 1; j < 4; j++) {
      if (i == 2 && j == 1) {
          flag = 0;
        }
        if (flag) {
        printf("Running i=%d j=%d\n", i, j);
      }
    }
  }

  return 0;
}
