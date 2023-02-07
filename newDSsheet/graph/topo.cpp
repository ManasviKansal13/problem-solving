//topological sort

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int v,e,a,b;
    cout<<"Enter the number of vertices of graph: ";
    cin>>v;
    cout<<"Enter the number of edges of graph: ";
    cin>>e;
    vector<int>Adj[v];
    vector<int>DAT(v,0);
    for(int i=1;i<=e;i++){
        cout<<"Enter the end points of Edge "<<i<<" ";
        cin>>a>>b;
        Adj[a].push_back(b);
        DAT[b]++;
    }
    cout<<"The Adjacency List Representatn of the graph is: "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<": ";
        for(int j=0;j<Adj[i].size();j++)
            cout<<Adj[i][j]<<",";
        cout<<endl;
    }
    cout<<endl<<"The Outdegrees of the vertices are :"<<endl;
    for(int i=0;i<v;i++)
        cout<<i<<": "<<Adj[i].size()<<endl;
    cout<<endl<<"The Indegrees of the vertices are :"<<endl;
    for(int i=0;i<v;i++)
        cout<<i<<": "<<DAT[i]<<endl;
    queue<int>q;
    for(int i=0;i<v;i++){
        if(DAT[i]==0)
            q.push(i);
    }
    cout<<endl<<"Topological sort of the graph is: ";
    while(q.size()!=0){
        int x;
        x=q.front();
        q.pop();
        for(int j=0;j<Adj[x].size();j++){
            DAT[Adj[x][j]]--;
            if(DAT[Adj[x][j]]==0)
                q.push(Adj[x][j]);
        }
        cout<<x<<" ";
    }
    return 0;
}