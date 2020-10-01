#include <bits/stdc++.h>
using namespace std;
#define m 100
typedef struct node
{
    int data;
    node *link;
} node;
node *h=NULL;
void insert(int x, int n)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = x;
    if (n == -1)
    {
        node *p = h;
        while (p->link != NULL)
        {
            p = p->link;
        }
        temp->link = NULL;
        p->link = temp;
    }else if (n == 0)
    {
        temp->link = h;
        h = temp;
    }
    else
    {
        node *t2;
        t2 = h;
        n=n-2;
        while(n--)
            t2 = t2->link;
        temp->link = t2->link;
        t2->link = temp;
    }
}
void deleteN(int x){
    if(x==-1){
        node *p=h;
        node *prev;
        while(p->link!=NULL){
            prev=p;
            p=p->link;
        }
        prev->link=NULL;
        p=prev;
    }else
    {
        node *p = h;
        node *prev;
        while(p->data!=x){
            prev=p;
            p=p->link;
        }
        prev->link =p->link ;
        p = prev;
    }

}
void insert_at(int x, int item)
{
    node *p = h;
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    while (p->data != item)
    {
        p = p->link;
    }
    temp->link = p->link;
    p->link = temp;
}
void display()
{
    node *t = h;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->link;
    }
    cout << "\n";
}
int main()
{
    while (1)
    {   
        int n,x,x1,pos;
        cout << "1.Insert at front\n2.insert at end\n3.insert at given pos\n4.Enter element after given value\n5.Delete last node\n6.delete node\n";
        cout<<"Enter choice\n";
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter Element\n";
            cin>>x;
            insert(x,0);
            break;
        case 2:
        cout<<"Enter element\n"; 
        cin>>x;
        insert(x,-1);
        break;
        case 3:cout<<"Enter  Element and position\n";
        cin>>x>>pos;
        insert(x,pos);
        break;
        case 4:cout<<"Enter element and value where to insert\n";
        cin>>x>>x1;        
        insert_at(x,x1);
        display();
        break;
        case 5:deleteN(3);
        default:cout<<"display\n";
        display();
            break;
        }
    }
    
    return 0;
}
