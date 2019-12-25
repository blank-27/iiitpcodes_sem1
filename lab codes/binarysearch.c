#include<stdio.h>
void main()
{ int a[40],x,n,f=0,z;
 printf("enter number of element:");
 scanf("%d",&n);
 printf("enter elements of array");
 for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
 printf("enter number to be searched:");
 scanf("%d",&x);
 int end=n;
 int mid=(n-1)/2;
 int beg=0;
 for(int i=beg;i<end;i++)
 {
     if(a[mid]==x){
     z=mid;
     f=1;
     break;}
     if(x>a[mid])
     beg=mid+1;
  else
      end=mid-1; 
 }
 if(f==1)
     printf("elment at pos:%d",z+1);
 else
     printf("element not found");
 
}