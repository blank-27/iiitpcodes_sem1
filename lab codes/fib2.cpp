#include <stdio.h>

int a[1000]={0};
int c=0;
//a[0] = 0;

int fib(int n)
 {
    c++;

   if(n==0||n==1)
   return n;
   else if (a[n] == 0)
   {
         a[n] = (fib(n - 1) + fib(n - 2));
         return a[n];
      }}
 

int main() {
   int x , i=0;
   printf( "Enter the number of terms of series : ");
   scanf("%d", &x);
   
  
      printf("%d ",fib(x));
 
  // cout<<endl<<c<<endl;
  
   return 0;
}