//problem1
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=1;i<=n;i++)
    {
     printf("%d\n",array[i]);
    }
}