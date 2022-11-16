#include <stdio.h>
int main(void) 
{
char name [] = "Agil"
  printf ("%c", *(name+1));
  char *namePtr;
  namePtr = name;
  printf("%c", *namePtr);
}
