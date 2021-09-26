
#include<bits/stdc++.h>
#define inf 100000000
using namespace std;
vector<int>v[10001];
int vis[10001]= {0};
void dfs(int sr)
{
    vis[sr]=1;
    for(int i=0; i<v[sr].size(); i++)
    {
        if(vis[v[sr][i]]==0)
        {
            cout<<v[sr][i]<<" ";
            dfs(v[sr][i]);
        }
        //cout<<v[sr][i];
    }
}
int main()
{
    int n,e,a,b,x;

    	cout<<"enter node and adge :";
    	cin>>n>>e;
        for(int i=1; i<=e; i++)
        {
        	cout<<"enter connected node : ";
            cin>>a>>b;
            v[a].push_back(b);
            //v[b].push_back(a);
        }
        cout<<"enter source value :";
        cin>>x;
        cout<<x<<" ";
        dfs(x);



}
