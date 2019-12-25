#include<stdio.h>
void main()
{int a,b;
 char c;
 printf("enter two numbers:");
 scanf("%d ",&a );
 scanf("%d ",&b);
 printf("enter operation u want to perform:\n");
 scanf("%c",&c);
 int d;
    switch(c)
    {
        case'+':d=a+b;
            printf("sum 0f the numbers is:%d",d);
            break;
        case'-':d=(a-b);
            printf("diff of numbers is:%d",d);
            break;
        case'*':d=a*b;
            printf("multiplication of numbers is:%d",d);
            break;
        case'/':d=(a/b);
            printf("division of numbers is:%d",d);
            break;
        default:printf("wrong input");
    }
}