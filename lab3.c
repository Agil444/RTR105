include<stdio.h>
#include<math.h>
float a=0.,b=2*M_Pi
float delta_x=5.e-1;

float*x;
int N=(b-a)/delta_x + 1;
x= (float*) malloc ((N) * sizeof(float));
if (x==NULL) exit (1);
printf("size of x array in bytes - %ld\n",sizeof(x));

int i = 0;
x[i] = a;
printf("%3d\t%6.3f\n",i,x[i]);
i++;
while(i<N)
{
  x[i] = x[i-1] + delta_x;
  printf("%3d\t%6.3f\n",i,x[i]);
  i++;
}
 whiile (i<N-1)
 {
 //fndfo[i]=f[f+i]-f[i];
 }
