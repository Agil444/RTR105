// pointer - is an address
#include 
int main()
{
int i_value = 857;
printf ("i_value (value; variable name used) = %d\n", i_value);
int *i_pointer = &i_value; //i_pointer (also) is variable for pointer or (adress) sorage //& shold be used in scanf
printf ("Placement of i_value variable in memory - %p\n", i_pointer);
printf ("Size of i_value - %ld (bytes)\n",sizeof(i_value)); // depemd of data type
printf ("Size of i_value - %ld (bytes)\n",sizeof(i_pointer)); // depends on architure of mahine 32 bits, 64 bits 
  printf ("i_value (value; address of variable used) = %d\n\n", *i_pointer);
   
  
  return 0;
}
