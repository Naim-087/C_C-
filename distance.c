#include<stdio.h>
int main ()
{
 int basic_sallary ;
 scanf("%d",&basic_sallary);
 float da = (0.40 * basic_sallary) ;
 float hr = (0.20 * basic_sallary) ;
 float gross_sallary = basic_sallary + da + hr;
 printf("The gross salary is : %.2f\n",gross_sallary);


return 0;
}