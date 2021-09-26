#include<bits/stdc++.h>
using namespace std;

void genarateLPS(int m,char* p, int* lps)
{
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<m)
    {
        if(p[len]==p[i])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }

    }
}
void kmp(char* t,char* p)
{
    int n=strlen(t);
    int m=strlen(p);
    int lps[m];
    genarateLPS(m,p,lps);
    int i=0,j=0;
    while(i<n)
    {
        if(t[i]==p[j])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<"found the petten at index :"<<i-j<<"\n";
            j=lps[j-1];
        }
        else if(i<n && t[i]!=p[j])
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }

    }
}
int main()
{
    char t[100];
    char p[50];
    cout<<"enter text : ";
    cin>>t;
    cout<<"enter patt :" ;
    cin>>p;
    kmp(t,p);
}
