#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int sub[5];
};
void check(int a)
{
    if(a>80)
        printf("Grade of student is :%c\n",'A');
    else if(a>60 && a<=80)
        printf("Grade of student is :%c\n", 'B');
    else if(a>40 && a<=60)
        printf("Grade of student is :%c\n", 'C');
    else
        printf("Grade of student is :%c\n", 'D');
}
int main()
{
    int n,i;
    scanf("%d",&n);
    struct student s[n];
   
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d and marks :\n ",i+1);
        scanf("%s",&s[i].name);
         for(int j=0;j<5;j++)
        scanf("%d",&s[i].sub[j]);
    }
    for(i=0;i<n;i++)
    {
        int grade;
        int sum=0;
       for(int j=0;j<5;j++)
       sum=sum+s[i].sub[j];
       sum=sum/5;
       check(sum);
    }
    return 0;
}