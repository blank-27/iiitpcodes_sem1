#include <stdio.h>
#include <math.h>

struct complex
{
    int real;
    int img;
};
void add(struct complex x1, struct complex x2)
{
    struct complex sum;
    sum.real=x1.real+x2.real;
    sum.img=x1.img+x2.img;
    printf("sum of numbers is:%d + i %d",sum.real,sum.img);
}
void sub(struct complex x1, struct complex x2)
{
    struct complex sum;
    sum.real = x1.real - x2.real;
    sum.img = x1.img - x2.img;
    printf("sub of numbers is:%d + i %d", sum.real, sum.img);
}
void multi(struct complex x1, struct complex x2)
{
    struct complex sum;
    int l = x1.real * x2.real;
    int g = x1.img * x2.img;
    sum.real=l+g;
    l=x1.real*x2.img;
    g=x1.img*x2.real;
    sum.img=l+g;
    printf("multi of numbers is:%d + i %d", sum.real, sum.img);
}
void div(struct complex x1, struct complex x2)
{
    struct complex sum;
    int s;
    s=pow(x2.real,2)+pow(x2.img,2);
    sum.real = ((x1.real * x2.real) + (x1.img * x2.img)) / s;
    sum.img = ((x1.img * x2.real) + (x1.real * x2.img)) / s;

    printf("div of numbers is:%d + i %d", sum.real, sum.img);
}
int main()
{
    struct complex a, b;
    char ch;
    printf("Enter complex");
    scanf("%d %d",&a.real,&a.img);
    scanf("%d %d", &b.real, &b.img);
    printf("Enter the oprator");
    scanf("\n%c",&ch);
    switch(ch)
    {
    case '+':   add(a,b);
    break;
    case '-':sub(a,b);
    break;
    case '/':div(a,b);
    break;
    case '*':multi(a,b);
    break;
    default:printf("invalid opertor!!");
    }
return 0;}