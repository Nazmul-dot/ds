
#include<bits/stdc++.h>
#include<stdio.h>
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
        node *tptr=root;
        while(true)
        {
            if(tptr->data>value)
            {
                ///left side
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
            else  if(tptr->data<value)
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

void in_order(node *tpp)
{
    if(tpp!=NULL)
    {
        ///in-order
        in_order(tpp->left);
        cout<<tpp->data<<" ";
        in_order(tpp->right);

    }
}
void pre_order(node *tpp)
{
    if(tpp!=NULL)
    {
        ///pre-order
        cout<<tpp->data<<" ";
        pre_order(tpp->left);
        pre_order(tpp->right);

    }
}

void post_order(node *tpp)
{
    if(tpp!=NULL)
    {
        ///post-order
        post_order(tpp->left);
        post_order(tpp->right);
        cout<<tpp->data<<" ";

    }
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
    cout<<"\n";
    cout<<"bst in in-order : ";
    in_order(root);
    cout<<"\n";
    cout<<"bst in pre-order : ";
    pre_order(root);
    cout<<"\n";
    cout<<"bst in post-order : ";
    post_order(root);
}
