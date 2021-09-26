#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* pre=NULL;
    node* next=NULL;
};
node* head=NULL;
node* last=NULL;

void insertItem(int val)
{
    node* mynd=new node;
    mynd->data=val;
    if(head==NULL)
    {
        head=mynd;
        last=mynd;
    }
    else
    {
        mynd->pre=last;
        last->next=mynd;
        last=mynd;
    }
}

void delet(int val)
{
    node* mynod=head;
    node* previous=NULL;
    while(mynod!=NULL)
    {
        if(mynod->data==val)
        {
            if(previous==NULL)
            {
                head=head->next;
            }
            else
            {
                previous->next=mynod->next;
            }
            break;
        }
        else
        {
            previous=mynod;
            mynod=mynod->next;
        }
    }
}
void dispaly()
{
    node* mynod=head;
    while(mynod!=NULL)
    {
        cout<<mynod->data<<" ";
        mynod=mynod->next;
    }
}
void dispaly_in_revers()
{
    node* mynod=last;
    while(mynod!=NULL)
    {
        cout<<mynod->data<<" ";
        mynod=mynod->pre;
    }
}
int main()
{
    insertItem(1);
    insertItem(2);
    insertItem(3);
    insertItem(4);
    insertItem(5);
    cout<<"disply in forword way :";
    dispaly();
    cout<<"\n";
    cout<<"display in revers way :";
    dispaly_in_revers();
    cout<<"\n";
    cout<<"delet data \n";
    delet(2);
    cout<<"after deletion : ";
    dispaly();
}
