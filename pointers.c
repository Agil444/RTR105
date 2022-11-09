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
  //2^64 -> 18446744073709551616 = 16EB
  printf ("i_value (value; address of variable used) = %d\n\n", *i_pointer);
  
 double  d_value = 1.5e-2; //1.5 * 10^2(-2) = 0.0015
printf ("d_value (value; variable name used) = %f\n", d_value);
  
double *d_pointer = &d_value; //i_pointer (also) is variable for pointer or (adress) sorage //& shold be used in scanf
printf ("Placement of i_value variable in memory - %p\n", d_pointer);
printf ("Size of d_value - %ld (bytes)\n",sizeof(d_value)); // depemd of data type
printf ("Size of d_value - %ld (bytes)\n",sizeof(d_pointer)); // depends on architure of mahine 32 bits, 64 bits 
printf ("d_value (value; address of variable used) = %f\n\n", *d_pointer);
   
   
  
  return 0;
}
