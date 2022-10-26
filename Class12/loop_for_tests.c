#include<stdio.h>

int main()
 {
 char c;

 for(c=10 ; c>=0 ; c--) // part before first ; is executed only one time
                        // part before first ; can contain multiple actions follwed by comma
                        // for(action_a,action_b ; expression ; action_y, action_z)
                        // part after second ; is executed multiple times
                        // execution of action(s) of loop continues while expression is true
  {
  printf("c = %d\n",c);
  }

 printf("Print after for loop.\n");

 return 0;
 }
