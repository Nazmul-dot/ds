
#include<bits/stdc++.h>
using namespace std;
int a[10001];
void binary_search(int ft,int lst,int nm)
{
    if(ft>lst)
    {
        cout<<"the number is not founded\n";
        return;
    }

    int mid=(ft+lst)/2;
    if(a[mid]==nm)
    {
        cout<<"the number is founded\n";
        return;
    }

    else if(a[mid]<nm)
    {
        ft=mid+1;
        binary_search(ft,lst,nm);
    }

    else if(a[mid]>nm)
    {
        lst=mid-1;
        binary_search(ft,lst,nm);

    }



}
int main()
{
    int n,i;
    cout<<"Please enter n: ";
    cin>>n;
    cout<<"Enter n elements number";
        for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter searching number: ";
    int b;
    cin>>b;
    binary_search(0,n-1,b);
}
