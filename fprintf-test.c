#include <stdio.h>

int main ()
{
  printf("printf\n");
  fprintf(stdout, "fprintf stdout");
  fprintf(stderr, "fprintf stderr");
  return 0;
}