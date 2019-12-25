#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b;
    float gb,ab,price,s,t;
    cin>>x;
    for(int i=0;i<x;i++)
    {   
    cin>>gb>>ab>>y;
    for(int j=0;j<y;j++)
    {  
        cin>>a;
    if(a==1)
        s++; 
        cin>>b;
    if(b==1)
    t++;}
    if (gb>ab)
    {
        if(s>t)
        price=(ab*s)+(gb*t);
        else 
        price=(ab*t)+(gb*s);
        }
    else 
    {
        if(s>t)
        price=(ab*t)+(gb*s);
        else 
        price=(ab*s)+(gb*t);
    }
     cout<<price<<endl;
    }  return 0; }