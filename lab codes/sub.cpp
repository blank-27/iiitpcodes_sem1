#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s=0,t=0,ans,r;
    cin>>a;
    for(int i=0;i<a;i++)
    {   ans=0;
        cin>>b;
        for(int j=1;j<=b;j++)
        {
        c=b/j;
            r=j;
        while(c>=0 && r>=0)
        {
            c=c/2;
            r=r/2;
        }
        
        if(r>=0)
        ans++;
        }
      cout<<ans<<endl;  
    }
    return 0;
}