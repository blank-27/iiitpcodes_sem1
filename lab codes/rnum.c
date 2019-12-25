#include<stdio.h>
int main()
{
    int num, rnum=0,b;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0)
    {
        b=num%10;
        num=num/10;
        rnum=rnum*10 + b;
    }
    printf("The reverse number is %d",rnum);
        return 0;
}