#include<iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};
node* font=NULL;
node* rear=NULL;

bool isempty()
{
    if(font== NULL && rear== NULL)
        return true;
    else
        return false;
}

void enqueue(int val)
{
    node* ptr=new node;
    ptr->data=val;
    ptr->link=NULL;

    if(font==NULL)
    {
        font=ptr;
        rear=ptr;
    }
    else
    {

        rear->link=ptr;
        rear=ptr;

    }
    cout<<val<<" ";
}
void dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty\n";
    }
    if(font==rear)
    {
        font=NULL;
        rear=NULL;
    }
    else
    {
        font=font->link;
    }
}
void show_font()
{
    if(isempty())
    {
        cout<<"queue is empty\n";
    }
    else
    {
        cout<<font->data<<"\n";
    }
}
void dispaly()
{

    if(isempty())
    {
        cout<<"queue is empty\n";
    }
    else
    {
        node* tem=font;
        while(tem!=NULL)
        {
            cout<<tem->data<<" ";
            tem=tem->link;
        }
    }
}

int main()
{
	cout<<"elements : ";
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(6);
    enqueue(8);
    enqueue(5);
    enqueue(5);
    cout<<"\nshow font: ";
    show_font();
    dequeue();
    cout<<"data after deletion: ";
    dispaly();
}
