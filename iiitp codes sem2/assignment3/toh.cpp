#include <iostream>

void toh(int n, char f,char t, char a)
{
    if (n == 1)
    {
        printf("disk 1:  %c --->  %c \n",f,t);
        return;
    }
    toh(n - 1, f, a, t);
    printf("disk %d:  %c --->  %c \n", n,f, t);
    toh(n - 1, a, t, f);
}

int main()
{
    int n;
    printf("Enter number of disk:\n");
    scanf("%d",&n);
    toh(n, 'A', 'C', 'B'); 
    return 0;
}