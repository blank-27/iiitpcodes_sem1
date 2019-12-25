#include <stdio.h>
#include <math.h>

struct point
{
    float x,y;
} ;
void dis(struct point m, struct point n)
{
    float l = pow((m.x - n.x), 2) + pow((m.y - n.y), 2);
    float z=sqrt(l);
    printf("%f",z);
}
void mid(struct point m, struct point n)
{
    float l =(m.x +n.x)/2 ;
    float z= (m.y+n.y)/2;
    printf("%f %f", l,z);
}
void area(struct point m, struct point n, struct point p)
{
   
     float z=m.x*(n.y-p.y)-n.x*(m.y-p.y)+p.x*(m.y-n.y);
     z=fabs(z);
     printf("%f",z/2);
}
void main()
{
    struct point a,b,c;
   int d;
    printf("1.find distance\n");
    printf("2.find middle point\n");
    printf("3.find area of triangle\n");
    scanf("%d",&d);
    switch(d)
    {
    case 1:
        printf("Enter points");
        scanf("%f %f", &a.x, &a.y);
        scanf("%f %f", &b.x, &b.y);
        dis(a,b);
        break;
    case 2:
        printf("Enter points");
        scanf("%f %f", &a.x, &a.y);
        scanf("%f %f", &b.x, &b.y);
        mid(a, b);
        break;
    case 3:
        printf("Enter points");
        scanf("%f %f", &a.x, &a.y);
        scanf("%f %f", &b.x, &b.y);
        scanf("%f %f", &c.x, &c.y);
        area(a, b,c);
        break;
        default :printf("Invalid choice!!");

    }
}