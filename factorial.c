#include<stdio.h>
int main ()
{
    int n;
    
    scanf("%d",&n);
    long long int fact =1;
    while(n>0)
    {
        fact = fact*n; 
        n--;

    }
    printf("%lld",fact);


return 0;
}