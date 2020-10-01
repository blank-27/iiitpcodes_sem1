#include <iostream>
#include <stdlib.h>

void inserS(int x){
    
}
void main()
{
    while (1)
    {
        int n;
        int ele;
        printf("1.Push elements\n");
        printf("2.pop elements\n");
        printf("3.Display stack\n");
        scanf("%d", &n);
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