#include<stdio.h>
typedef struct
{
    char name[50];
    int rno;
    int marks[5];
} student;
void main()
{
    int n,i,j;
    printf("Enter number of student:");
    scanf("%d",&n);
    student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name of the student%d : ", i + 1);
        scanf("%s",s[i].name);
        printf("Enter Roll No. of student:");
        scanf("%d",&s[i].rno);
        printf("Enter marks of student in 5 subjects:");
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }

    printf("\n");
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("-");
    }
    printf("\n");
    printf("\n");

    for ( i = 0; i < n; i++)
    {
        printf("DETAILS OF STUDENT %d ARE :-\n",i+1);
        printf("NAME:%s",s[i].name);
        printf("\n");
        printf("ROLL NO. %d",s[i].rno);
        printf("\n");
        printf("MARKS:");
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("SUB %d: %d", j+1,s[i].marks[j]);
            printf("\n");
        }
    }
        
}