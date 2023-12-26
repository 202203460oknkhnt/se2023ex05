#include <stdio.h>

int main(void) {
  int i = 5;
  for (i; i < 10; i++) {
    printf("hello %d", i);
  }
  return 0;
}