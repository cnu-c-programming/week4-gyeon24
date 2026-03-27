#include <stdio.h>

void(swap_endian(int *x)){
  char *p = (char *)x;
  char tmp;

  tmp = p[0];
  p[0] = p[3];
  p[3] = tmp;

  tmp = p[1];
  p[1] = p[2];
  p[2] = tmp;
}

int main(){
  int x = 0x12345678;

  printf("%x\n", x);
  swap_endian(&x);
  printf("%x\n", x);

  return 0;
}
