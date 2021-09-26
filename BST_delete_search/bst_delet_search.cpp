
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*left=NULL;
    node*right=NULL;
};
node*root=NULL;
void add(int value)
{
    node* nptr=new node;
    nptr->data=value;
    nptr->left=NULL;
    nptr->right=NULL;
    if(root==NULL)
    {
        root=nptr;
    }
    else
    {
        node* tptr=root;
        while(true)
        {
            if(tptr->data>value)
            {
                if(tptr->left==NULL)
                {
                    tptr->left=nptr;
                    break;
                }
                else
                {
                    tptr=tptr->left;
                }
            }
            else  if(tptr->data<=value)
            {
                if(tptr->right==NULL)
                {
                    tptr->right=nptr;
                    break;
                }
                else
                {
                    tptr=tptr->right;
                }
            }
        }
    }

}
void print(node* nd)
{
    if(nd!=NULL)
    {
        print(nd->left);
        cout<<nd->data<<" ";
        print(nd->right);
    }
}

node* delet(node*ndd,int value)
{
    if(ndd==NULL)
        return NULL;
    else if(ndd->data>value)
    {
        ndd->left=delet(ndd->left,value);
    }
    else if(ndd->data<value)
    {
        ndd->right=delet(ndd->right,value);
    }
    else
    {
        if(ndd->left==NULL && ndd->right==NULL)
        {
            ndd=NULL;
        }
        else if(ndd->left==NULL)
        {
            ndd=ndd->right;
        }
        else if(ndd->right==NULL)
        {
            ndd=ndd->left;
        }
    }
}


void searchItem(int val)
{
    node* mynd=root;
    int f=0;
    while(mynd!=NULL)
    {
        if(mynd==NULL) break;
        if(mynd->data==val)
        {
            f=1;
            break;
        }
        else if(mynd->data<val)
        {
            mynd=mynd->right;
        }
        else
        {
            mynd=mynd->left;
        }
    }

    if(f==1)
        cout<<"founde item \n";
    else
        cout<<"not found the item \n";
}
int main()
{
    add(50);
    add(15);
    add(75);
    add(81);
    add(77);
    add(30);
    add(64);
    add(99);
    add(18);
    add(3);
    add(35);
    cout<<"print data from root : ";
	print(root);
	cout<<"\n";
    delet(root,18);
    cout<<"after deletion: ";
    print(root);
    cout<<"\n";
    searchItem(30);
    return 0;
}

