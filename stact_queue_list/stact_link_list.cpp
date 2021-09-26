#include<iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* top=NULL;

bool isempty()
{
    if(top==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int val)
{
    node* ptr=new node;
    ptr->data=val;
    ptr->link=top;
    top=ptr;
    cout<<val<<" ";
}
void pop()
{
    if(isempty())
    {
        cout<<"stack is empty"<<'\n';
    }
    else
    {
        top=top->link;
    }
}
void show_top()
{
    if(isempty())
    {
        cout<<"stack is empty"<<'\n';
    }
    else
    {
        cout<<top->data;
    }

}
void show_stack()
{
    node* tem;
    if(isempty())
    {
        cout<<"stack is empty"<<'\n';
        return;
    }
    tem=top;
    while(tem->link!=NULL)
    {
        cout<<tem->data<<"-> ";
        tem=tem->link;
    }
    cout<<tem->data<<"\n";
}
int main()
{
	cout<<"elements : "; 
    push(1);
    push(2);
    push(3);
    push(7);
    push(9);
    push(5);
    cout<<"\ndisplay element : ";
    show_stack();
    pop();
    pop();
    cout<<"data after poped: ";
    show_stack();
    //show_top();
}
