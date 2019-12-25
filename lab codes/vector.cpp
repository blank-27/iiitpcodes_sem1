#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     v.push_back(i);   
    }
    for(auto i= v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}