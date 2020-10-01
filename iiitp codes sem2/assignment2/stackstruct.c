#include<stdio.h>
#include <stdlib.h>
typedef struct {
  int a,b;
}stck;
stck st[100];
int top=-1;

void  push(int e1,int e2)
{
      if(top==99)
          printf("Stack Overflow\n");
      else
    {
        top++;
        st[top].a = e1;
        st[top].b = e2;
    }
}

void pop()
{
    if(top==-1)
        printf("Stack Underflow!! Stack is empty\n");
    else
    {
        printf("Element to be deleted is:%d %d\n", st[top].a,st[top].b);
        top--;
    }
}
void display()
{
    int t=top;
    printf("Element in stack are:\n");
    while(t!=-1)
    {
        printf("%d  %d ,",st[t].a , st[t].b);
        t--;
    }
    printf("\n");
}

void main()
{
    while(1)
    {
        int n;
        int e1,e2;
        printf("1.Push elements\n");
        printf("2.pop elements\n");
        printf("3.Display stack\n");
        printf("4. Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("Enter element:\n");
            scanf("%d %d", &e1 ,&e2);
            push(e1,e2);
            break;
        case 2:
            printf("pop elements\n");
            pop();
            break;
        case 3:
            printf("dispaly stack\n");
            display();
            break;
        case 4: printf("Exit\n");
        exit (0);
            break;
        default:
            printf("wrong choice\n");
            break;
        }
    }
}
