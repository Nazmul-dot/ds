
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
struct node
{
    char data;
    node*left=NULL;
    node*right=NULL;
};
node*root=NULL;

 void add(char value)
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

 void print_inOder(node *tpp)
 {
    if(tpp!=NULL)
    {
        ///in-order
        print_inOder(tpp->left);
        cout<<tpp->data<<" ";
        print_inOder(tpp->right);

    }
 }

  void print_preOder(node *tpp)
 {
    if(tpp!=NULL)
    {
        /// pre-order
         cout<<tpp->data<<" ";
         print_preOder(tpp->left);
         print_preOder(tpp->right);
    }
 }

  void print_postOrder(node *tpp)
 {
    if(tpp!=NULL)
    {
       /// post-order
         print_postOrder(tpp->left);
         print_postOrder(tpp->right);
        cout<<tpp->data<<" ";
    }
 }
 int main()
 {
     //e,h,f,i,g,c,d,b
     add('e');
     add('h');
     add('f');
     add('i');
     add('g');
     add('c');
     add('d');
     add('b');
     cout<<"print in Order : ";
     print_inOder(root);
     cout<<"\n";
     cout<<"print pre Order : ";
     print_preOder(root);
     cout<<"\n";
     cout<<"print post Order : ";
     print_postOrder(root);
     cout<<"\n";
 }
