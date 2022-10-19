//operation: operand_1  operation operand_2
//          (datu tyoe)          (datu type)
//                 result_of_operation
//                     (data type)
// data type- int, char, short, float, double  ( +loong + long long + unsigned )
//  ()==()=======>
int main()
{
char c1 = 'A', c2 = 0*45;
int i1 = 2000, i2 = 01056;]
float f1 = 2.3, f2 = -700.896;
double d1 = -5.6e4, d2 = 456.8e-3;

printf("\n%d (%ld bytes) * %d (%ld nytes)", c1,sizeof(c1),i1,sizeof(i1));
printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

// &&
return 0;
}
c1= 1;
c2= 2;
printf("\n%d (%ld nbytes) && %dm (%ld bytes)",c1,sizeof(c1),c2,sizeof(c2));
printf(" = %d (%ld bytes)\n\n",c1&&c2,sizeof(c1&&c2));

// !
printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes)\n",c1,sizeof(c1),c1,!c1,sizeof(!c1));
c1 = 0;

char uc1 = 1;
c1 = 0;
printf("n%d (%ld bytes) << %d (%ld bytes)", uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
c1 = 1;
