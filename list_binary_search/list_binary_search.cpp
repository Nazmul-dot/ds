#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next=NULL;
};
node* head=NULL;
node* last=NULL;

void insertItem(int val)
{
    node* mynod=new node;
    mynod->data=val;
    if(head==NULL)
    {
        head=mynod;
        last=mynod;
    }
    else
    {
        last->next=mynod;
        last=mynod;
    }
}

node* mid_node(node* start,node* last)
{
    if (start == NULL)
        return NULL;
    node* show=start;
    node* fast=start->next;
    while(fast!=last)
    {
        fast=fast->next;
        if(fast!=last)
        {
            show=show->next;
            fast=fast->next;
        }
    }
    return show;
}
node* binary_searchItem(int val)
{
    node* start=head;
    node* last=NULL;
    do
    {
        node* mid=mid_node(start,last);
        if(mid==NULL)
            return NULL;
        else if(mid->data==val)
            return mid;
        else if(mid->data<val)
            start=mid->next;
        else
            last=mid;

    }
    while(last==NULL || start!=last);

    return NULL;
}
void display()
{
    node* mynod=head;
    while(mynod!=NULL)
    {
        cout<<mynod->data<<" ";
        mynod=mynod->next;
    }
}
int main()
{
    insertItem(1);
    insertItem(2);
    insertItem(3);
    insertItem(4);
    insertItem(5);
    display();
    cout<<"\n";
    if( binary_searchItem(3))
    {
        cout<<"data is founded \n";
    }
    else
    {
        cout<<"data is not founded \n";
    }
}
