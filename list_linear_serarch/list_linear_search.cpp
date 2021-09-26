#include<bits/stdc++.h>
using namespace std;
struct node{
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

void searchItem(int val)
{
    node* mynod=head;
    int f=0;
    while(mynod!=NULL)
    {
        if(mynod->data==val)
        {
            cout<<"data is founded ";
            f=1;
            break;
        }
        else{
            mynod=mynod->next;
        }
    }
    if(!f)
    {
        cout<<"data is nod founded ";
    }
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
    searchItem(3);
}
