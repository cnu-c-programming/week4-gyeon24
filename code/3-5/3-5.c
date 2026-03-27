#include <stdio.h>

void my_printf(char type, void* x){
  switch(type){
    case 'C':
      printf("%c\n", *(char*) x);
      break;
    case 'D':
      printf("%d\n", *(int*) x);
      break;
    case 'S':
      printf("%s\n", (char*) x);
      break;
  }
}

int main(){
  int a = 0x61;
  char b = 'b';
  char* c = "hello world";

  my_printf('C', &a);
  my_printf('D', &b);
  my_printf('S', c);
  my_printf('C', c);

  return 0;
}
