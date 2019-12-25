#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int roll;
    char name[20];
    int fee;
    int iitp;
    int sm;
    int la;
}student;
int main()
{
    student *marks;
    int n,i;
    scanf("%d", &n);
    marks=(student *)malloc(n*sizeof(student));
    for(i=0; i<n; i++)
    {
        scanf("%d", &marks[i].roll);
        scanf("%s", marks[i].name);
        scanf("%d", &marks[i].fee);
        scanf("%d", &marks[i].iitp);
        scanf("%d", &marks[i].sm);
        scanf("%d", &marks[i].la);
    }
    for(i=0; i<n; i++)
    {
        printf("Student with roll no: %d and name %s got %d marks in fee and %d marks in iitp and %d marks in sm and %d marks in la", 
        marks[i].roll, marks[i].name, marks[i].fee, marks[i].iitp, marks[i].sm, marks[i].la);
    }
    return 0;
}