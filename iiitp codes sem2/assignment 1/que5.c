#include <stdio.h>

void printarray(int a[],int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
}

int partition(int a[], int s, int e)
{
    int temp, j = s - 1;
    int piv = a[e];
    for (int i = s; i < e; i++)
    {
        if (piv > a[i])
        {
            j++;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    
    temp = a[j+1];
    a[j+1] = a[e];
    a[e] = temp;
    // printarray(a,e);
    return j+1;
}

void quicksort(int a[],int start, int end)
{
    if(start < end )
    {
        int q = partition(a,start,end);
        quicksort(a,start,q-1);
        quicksort(a,q+1,end);
    }
    
}
//7
// 10 30 80 90 40 50 70

void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int piv,temp;
    scanf("%d",&piv);
    temp = a[n-1];
    a[n-1] = a[piv-1];
    a[piv-1] = temp;
    quicksort(a,0,n-1);
    printarray(a,n);
    
}
