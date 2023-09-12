#include <stdio.h>

int main()
{
  char *name = "OluJakes";
  char org[20] = "ALX Africa";
  int len = 0;

  while (name[len] != '\0')
    len++;
  printf("Length of name: %d\n", len);

  len = 0;
  while (org[len] != '\0')
    len++;
  printf("Length of org: %d\n", len);

  return 0;
}
