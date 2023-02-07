//topology

#include<iostream>
#include<bits./stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,e;
    cout<<"enter the number of vertices";
    cin>>n;
    vector<int>adj[n];
    vector<int>Dat[n];
    int i;
    cout<<"enter the number of edges";
    cin>>e;
    for(int i=1;i<=e;i++){    
        int a,b;
        cout<<"enter the endpoints of edges"<<i<<":";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        int j=0;
        cout<<i<<":";
        for(j=0;j<adj[i].size();j++)
            cout<<adj[i][j]<<",";
        cout<<endl;
    }
    cout<<endl<<"outdegree are:"<< endl;
    for(int i=0;i<n;i++)
        cout<<i<<":"<<adj[i].size()<<endl;
    cout<<endl;
    cout<<endl<<"indegree are :"<<endl;
    for(int i=0;i<n;i++)
        cout<<i<<":"<<Dat[i]<<endl;

    queue<int>q;
    for(int i=0;i<n;i++){
        if(Dat[i]==0)
            q.push(i);
    }
    cout<<endl<<"topological sort sequences is :"<<endl;
    while(q.size()!=0){
        int x;
        x=q.front();
        q.pop();
        for(int j=0;j<adj[x].size();j++)
        {
            Dat[adj[x][j]]--;
            if(Dat[adj[x][j]]==0)
                q.push(adj[x][j]);
            cout<<x<<" ";
        }
    }
}