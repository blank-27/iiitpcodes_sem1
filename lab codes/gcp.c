#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two number in increasing order : ");
    scanf("%d%d",&num1,&num2);
    for (int i=num1;i>0;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            printf("the GCP of the two number  is %d",i);
                break;
        }
    }
    return 0;
}