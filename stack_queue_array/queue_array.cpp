
#include<iostream>
using namespace std;
#define SIZE 5
int ar[SIZE];
int font=-1;
int rear=-1;

bool isempty()
{
    if(font==-1&&rear==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int val)
{
    if(rear==SIZE-1)
    {
        cout<<"queue is full \n";
    }
    else
    {
        if(font==-1)
        {
            font=0;
        }
        rear++;
        ar[rear]=val;
        cout<<val<<" ";
    }
}
void dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty \n";
    }
    else
    {
        if(rear==font)
        {
            rear=font=-1;
        }
        else
        {
            font++;
        }
    }
}
void show_font()
{
    if(isempty())
    {
        cout<<"queue is empty \n";
    }
    else{
        cout<<ar[font]<<"\n";
    }
}

void dispaly(){
   if(isempty())
    {
        cout<<"queue is empty \n";
    }
    else{
        for(int i=font;i<=rear;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
	cout<<"insert element : ";
    enqueue(2);
    enqueue(3);
    enqueue(4);
    cout<<"\nfont data :";
    show_font();
    cout<<"display data: ";
    dispaly();
    dequeue();
    cout<<"data after deletion : ";
    dispaly();
}
