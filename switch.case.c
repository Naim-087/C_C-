#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    switch (x)
    {
        case 1 :
        printf("sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednesday\n");
        break;
        default : 
        printf("Others Day\n");
        break;
    }



return 0;
}