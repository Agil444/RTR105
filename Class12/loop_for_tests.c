#include<stdio.h>

int main()
 {
 char A;

 for(A=10 ; A>=0 ; c++) // part before first ; is executed only one time
                        // part before first ; can contain multiple actions follwed by comma
                        // for(action_a,action_b ; expression ; action_y, action_z)
                        // part after second ; is executed multiple times
                        // execution of action(s) of loop continues while expression is true
  {
  printf("A = %d\n",A);
  }

 printf("Print after for loop.\n");

 return 0;
 }
