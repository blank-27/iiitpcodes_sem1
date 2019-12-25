#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char name[20];
    int sub[5];
    int roll;
}student;
void check(int *a,int x)
{
    if(*a>80)
        printf("Grade  is :%c\n",'A');
    else if(*a>60 && *a<=80)
        printf("Grade  is :%c\n",'B');
    else if(*a>40 && *a<=60)
        printf("Grade  is :%c\n",'C');
    else
        printf("Grade  is :%c\n",'D');
}
int main()
{
    int n,i;
    printf("Enter number of student:-");
    scanf("%d",&n);                                
    student *s;
    s = (student *)malloc(n * sizeof(student));
    for(i=0;i<n;i++)
    {
        printf("Enter name,roll no.,and marks of student %d:\n ", i + 1);
        scanf("%s",&s[i].name);
        printf("Enter roll no.");
        scanf("%d",&s[i].roll);
         for(int j=0;j<5;j++)
         {
             printf("Enter marks of sub %d:-",j+1);
        scanf("%d",&s[i].sub[j]);
         }
    }
    for(i=0;i<n;i++)
    {
        int grade;
        int sum=0;
        printf("student %d is: %s  ||  Roll number :  %d\n",i+1,s[i].name,s[i].roll);
       for(int j=0;j<5;j++)
       sum=sum+s[i].sub[j];
       sum=sum/5;
       check(&sum,i+1);
    }
    free(s);
    return 0;
}