#include <stdio.h>

int func(int n) {

  static int x = 0;

  if (n > 0) {
    x++;

    return func(n - 1) + x;
  }

  return 0;
}

int main() {
  int r = func(5);
  printf("%d\n", r);
  return 0;
}