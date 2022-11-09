//arrays - are stes of _sequentially_ placed values in memory, which could be 
// touched (set or get ) with one identifier - a[0], a[1], a[2]
//(bad ) alternative - a1, a2, a3 -why bad? - because it is not useful for
// algoritimization - programmer shold manually name every value - a1, a2, ...
// for arrays it is times simpler - i=0; a[i]; i++; a[i]; i++; a[i]; ...

//NB! name of arrays  is a pointer 
// NB! indexing of elements of array starts with 0
// NB! address of array is an address of 0-th element of array

#include <studio.h>
int main()
{
int i_array_1[10]; // declaration of int data array (10 elements with unpredictable values)
int i_array_2[3] = {1,2,3}; // definition in data array
int i_array_3[5] = {4,5,6}; // the last two (3-rd and 4-th) will be value 0
int i_array__with_zeros[5] = {0}; // values of all elements of array are 0
  
int i_array_2D[2][3] = {{1,2,3}, {10,11,12}}; 
  printf("address of i_array_2: %p\n", i_array_2);
  
  int i=0;
  printf("address of %d-th element of i_array_2: %p\n",i, &i_array_2[i]);
  printf("value of %d-th element of i_array_2: %p\n",i,i_array_2[i]);
  printf("value of %d-th element of i_array_2: %p\n",i,*(i_array_2+i));
  
  return;
}

