#include<stdio.h>
int main ()
{
 printf("Enter an array: \n");
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i =0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int min = __INT_MAX__;
  int max = __WINT_MIN__;
  for(int i =0;i<n;i++)
  {
      if(a[i]<min)
      {
          a[i]=min;
      }
      else if(a[i]>max)
      {
          a[i]=max;
      }
  }
  printf("min is %d and max is %d :\n",min,max);
  return 0;
}
