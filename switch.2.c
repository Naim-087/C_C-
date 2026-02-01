#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    getchar(); 
    char operator;
    scanf("%c",&operator);

    switch(operator)
    {
        case '+':
        printf("sum : %d\n",a+b);
        break;
        case '-':
        printf("substract : %d\n",a-b);
        break;
        case '*':
        printf("Multiplication : %d\n",a*b);
        break;
        case '/':
        printf("division : %d\n",a/b);
        break;

        defualt:
        printf("the operation is not valid\n");
        break;

    }



return 0;
}