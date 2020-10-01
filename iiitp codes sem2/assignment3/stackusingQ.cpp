#include<bits/stdc++.h>
using namespace std;
queue<int> q1;
queue<int> q2;
void push(int item,int n)
{
    q2.push(item);
    n++;
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    queue<int>q=q1;
    q1=q2;
    q2=q;
}
void pop(int &n)
{
    int item=q1.front();
    q1.pop();
    n--;
    cout<<item<<endl;
}

void display()
{
    queue<int> tempQ = q1;
    while (!tempQ.empty())
    {
        cout << '\t' << tempQ.front();
        tempQ.pop();
    }
    cout << '\n';
}
int main()
{
    int n=0,c;
    do
    {
        cout<<"\n1.push element\n2.pop element\n3.display\n4.exit\n";
        cin>>c;
        switch(c)
        {
            case 1: int item;
                    cout<<"enter element\n";
                    cin>>item;
                    push(item,n);
                    break;
            case 2: if(n)cout<<pop(n)<<"\n";
                    else cout<<"stack is empty\n";
                    break;
            case 3: display();
                    break;
             case 4:exit(0);
             break;
             default:cout<<"wrong input\n";
        }
    } while (c!=5);
    

}