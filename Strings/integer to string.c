#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
  int n = 2;
  char str[23] = "";
  sprintf(str, "%d", n);
  printf("%s", str);
}
