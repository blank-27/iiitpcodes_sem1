#include<stdio.h>
void main()
{int n,a=0,b=1,z=0;
 printf("enter num:");
 scanf("%d",&n);
 printf("%d",a);
 for(int i=0;i<n-1;i++)
 {
    b=b+z;
     z=a;
  a=b;
printf("%d",b);
}
}