#include <iostream>
#include <stdlib.h>
#define size 100
using namespace std;
int front = 0, rear = 0, que[size];

void insertQ(int ele)
{
    if ((front == 0 && rear == size - 1) || (rear + 1==front))
    {
        cout << "Queue is full\n";
    }
    else if (front == 0 && rear == 0)
    {
        que[rear] = ele;
        rear++;
    }
    else if (rear == size - 1 && front > 0)
    {
        rear = 0;
        que[rear] = ele;
    }
    else
    {
        que[rear] = ele;
        rear++;
    }
}

void deleteQ()
{
    if (front == 0 && rear == 0)
    {
        cout << "Queue is empty\n";
    }
    else if (front == rear)
    {
        cout << que[rear] << "\n";
        front = 0;
        rear = 0;
    }
    if (front == size - 1)
    {
        cout << que[front] << "\n";
        front = 0;
    }
    else
    {
        cout << que[front] << "\n";
        front++;
    }
}

void displayQ()
{
    printf("display Q\n");
    if (rear >= front)
    {
        for (int i = front; i < rear; i++)
            cout<<que[i]<<" ";
    }
    else
    {
        for (int i = 0; i <= rear; i++)
            cout<<que[i]<<" ";
        for (int i = front; i < size; i++)
            cout << que[i] << " ";
    }
}
int main()
{
    int n,x;
    while (1)
    {
        printf("\n1.insert element\n2.delete element\n3.display\n4.exit()\n");
        cin >> n;
        switch (n)
        {
        case 1:
            printf("Enter elememt:\n");
            scanf("%d", &x);
            insertQ(x);
            break;
        case 2:
            deleteQ();
            break;
        case 3:
            displayQ();
            break;
        case 4:
            exit(0);
            break;
        default:
        cout<<rear<<" "<<front<<endl;
            printf("wrong input\n");
        }
    }
}
