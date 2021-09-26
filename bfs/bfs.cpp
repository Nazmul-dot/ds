#include<bits/stdc++.h>
using namespace std;
#define mx 100
vector<int>nd[mx];
int dis[mx];
bool vis[mx];
void bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    dis[src]=0;
    q.push(src);
    while(!q.empty())
    {
         int nodd = q.front();
         q.pop();
         for (int i = 0; i < nd[nodd].size(); i++)
        {
            int next=nd[nodd][i];
            if(vis[next]==0)
            {
                vis[next]=1;
                dis[next]=dis[nodd]+1;
                q.push(next);

            }

        }
    }
}
int main()
{
    int n,e,x,y;
    cout<<"enter node and edge : ";
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
    	cout<<"connected node: ";
        cin>>x>>y;
        nd[x].push_back(y);
        nd[y].push_back(x);
    }
    int src;
    cout<<"enter source value : ";
    cin>>src;
    bfs(src);
    cout<<"from node"<< src<<":\n";
    for(int i=1;i<=n;i++)
    {
        cout<<"distance of "<<i<<" is ="<<dis[i]<<endl;
    }


}
