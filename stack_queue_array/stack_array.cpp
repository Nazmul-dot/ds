#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int arr[SIZE];
int top=-1;

bool isempty()
{
    if(top==-1)
        return true;
    else
       return false;
}
void push(int val)
{
    if(top==SIZE)
    {
        cout<<"stack is full \n";
    }
    else
    {
        top++;
        arr[top]=val;
        cout<<val<<" ";
    }
}

void pop()
{
    if(isempty())
    {
        cout<<"stack is empty \n";
    }

    else
    {
        top--;
    }

}
void display()
{
    for(int i=0; i<=top; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
	cout<<"inser element: ";
    push(1);
    push(3);
    push(5);
    push(6);
    push(8);
    cout<<"\ndisplay element: ";
    display();
    cout<<"\n";
    cout<<"poped elemet\n";
    pop();
    cout<<"data after deleting: ";
    display();
}
