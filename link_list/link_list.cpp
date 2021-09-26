#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next=NULL;
};
node*head=NULL;
node*last=NULL;
void last_insert(int val);
void insert_fist(int val);
void insert_midd(int key,int val);

void creat()
{
    int val;
    while(true)
    {
        cout<<"enter elemect:";
        cin>>val;

        if(val==-1)
            break;
//        insert_fist(val);
       last_insert(val);

    }
}

void last_insert(int val)
{
    node*mynd=new node;
    mynd->data=val;
    mynd->next=NULL;
    if(head==NULL)
    {
        head=mynd;
        last=mynd;
    }
    else
    {
        last->next=mynd;
        last=mynd;
    }
}

void insert_fist(int val)
{
    node*mynd=new node;
    mynd->data=val;
    mynd->next=head;
    head=mynd;
}

void insert_midd(int key,int val)
{
    node*mynd;
    mynd=head;
    int flg=0;
    while(mynd->next!=NULL)
    {
        if(mynd->data==key)
        {
            node*nptr=new node;
            nptr->data=val;
            nptr->next=mynd->next;
            mynd->next=nptr;
            flg=1;
            cout<<"inserted\n";
            break;
        }
        else
            mynd=mynd->next;
    }
    if(flg==0)
        cout<<"not insert\n";

}

void delett(int val)
{
    node*nptr;
    nptr=head;
    node*prevous=NULL;
    int flg=0;
    while(nptr->next!=NULL)
    {
        if(nptr->data==val)
        {
            if(prevous==NULL)
                head=head->next;
            else
                prevous->next=nptr->next;
                flg=1;
            cout<<"\n deleted\n";
            break;
        }
        else
        {
            prevous=nptr;
            nptr=nptr->next;

        }
    }
    if(flg==0)
        cout<<"\n not delet\n";
}

void searchh(int val)
{
    node*nptr;
    nptr=head;
    int flg=0;
    while(nptr->next!=NULL)
    {
        if(nptr->data==val)
        {
            cout<<"\n founded data\n";
            flg=1;
            break;
        }
        else
            nptr=nptr->next;
    }
    if(flg==0)
    {
        cout<<"\n not founded\n";
    }
}

void print()
{
    cout<<"\nelement:";
    node*mynd;
    mynd=head;
    while(mynd->next!=NULL)
    {
        cout<<mynd->data<<" ";
        mynd=mynd->next;
    }
    cout<<mynd->data;
    cout<<"\n";
}

int main()
{

    creat();
    print();
    int item;

    cout<<"delet item : ";
    cin>>item;
    delett(item);
    cout<<endl;
    print();

}
