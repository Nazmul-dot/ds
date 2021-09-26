#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cout<<"enter the n number :";
     cin>>n;
     int ar[n];
     cout<<"enter n elemets :";
     for(int i=0;i<n;i++)
     {
         cin>>ar[i];
     }
     cout<<"enter search number :";
     int num;
     cin>>num;
     int f=0;
     for(int i=0;i<n;i++)
     {
         if(ar[i]==num)
         {
             cout<<"the number is founded";
             f=1;
         }
     }
     if(f==0)
        cout<<"the number is not founded";
 }
