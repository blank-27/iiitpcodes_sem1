#include<stdio.h>
void main()
{int a,b;
 printf("enter two number to swap:");
 scanf("%d",&a);
 scanf("%d",&b);
 printf("numbers before swap:%d /n",a);
 printf("%d",b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("numbers after swap:%d %d",a,b);
}
