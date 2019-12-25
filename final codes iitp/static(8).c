#include<stdio.h>
void fun(int n)
{
    static int count = 1;
    if(count<=10)
    {
        printf("%d X %d =%d\n", n, count, count * n);
        count++;
        fun(n);
    }
}
int main()
{   
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    fun(n);
}
