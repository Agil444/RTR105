#include<stdio.h>

int main()
 {
 char a; // one action  - declaration of variable with 
         // identifire  "a" and data type "char"
         // declaration means - connect(or assign) some area (soem amount of
         // bytes corresponds to data type )  in memory with identifier
         // placement memory is described by address (we will 
         // talk about it in some next lesson)
         // tehere are states (0,1) left from previous programs
         // 0000 1111 or 0101 1010 or 0011 0001 etc. 
printf("value(as symbol) of variable a just after declaration: %c\n",a );
//unfortunately in C language there isn't a speciefier for  bin numbers
 a = 56; 
printf("value()as symbol) of variable a just after assigment: %c\n",a); 
 return 0;
}
