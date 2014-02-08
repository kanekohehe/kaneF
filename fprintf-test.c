#include <stdio.h>

int main ()
{
  printf("printf\n");
  fprintf(stdout, "fprintf stdout\n");
  fprintf(stderr, "fprintf stderr\n");
  return 0;
}