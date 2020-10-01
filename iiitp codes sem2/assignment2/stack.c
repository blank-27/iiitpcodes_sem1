#include<stdio.h>
int st[100],top=-1;

void  push(int ele)
{
      if(top==99)
          printf("Stack Overflow\n");
      else
    {
        top++;
        st[top]=ele;
    }
}

void pop()
{
    if(top==-1)
        printf("Stack Underflow!! Stack is empty\n");
    else
    {
        printf("Element to be deleted is:%d \n", st[top]);
        top--;
    }
}
void display()
{
    int t=top;
    printf("Element in stack are:\n");
    while(t!=-1)
    {
        printf("%d ",st[t]);
        t--;
    }
    printf("\n");
}
void main()
{
    while(1)
    {
        int n;
        int ele;
        printf("1.Push elements\n");
        printf("2.pop elements\n");
        printf("3.Display stack\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("Enter element:\n");
            scanf("%d", &ele);
            push(ele);
            break;
        case 2:
            printf("pop elements\n");
            pop();
            break;
        case 3:
            printf("dispaly stack\n");
            display();
            break;
        default:
            printf("wrong choice\n");
            break;
        }
    }  
}