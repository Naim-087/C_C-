#include<stdio.h>
int main ()
{
    char ch ;
    scanf("%c",&ch);
    if((ch >='a'&& ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("This is an alphabet : %c\n",ch);
    }
    else if(ch>='0' && ch <='9')
    {
        printf("This is an digit: %c\n",ch);
    }



return 0;
}