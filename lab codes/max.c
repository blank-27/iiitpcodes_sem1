#include<stdio.h>
void main()
{int n,a,i,b;
printf("enter number of inputs:");
scanf("%d",&n);
 printf("enter number:");
 scanf("%d",&a);
 int x=a;
for(i=0;i<n;i++){
printf("enter number:");
scanf("%d",&b);
    if(x<b)
        x=b;
}
 printf("greatest number is:%d",x );
}