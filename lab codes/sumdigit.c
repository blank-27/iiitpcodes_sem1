#include<stdio.h>
void main()
{
    int num,b,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0)
    {   b=num%10;
        sum=sum+b;
        num=num/10;
        
    }
    printf("The sum of the number is %d",sum);
}