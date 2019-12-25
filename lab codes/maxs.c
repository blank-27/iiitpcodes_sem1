#include<stdio.h>
int main()
{
    int n, x ,b=1;
    printf("the the total number n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   printf("Enter the value of n :");
        scanf("%d",&x);
     if(b<x)
         b=x;
        
    }
    printf("The maximum number is %d",b);
    return 0;
}