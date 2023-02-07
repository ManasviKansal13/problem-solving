//indegree & outdegree of a graph

#include<iostream>
#include<vector>
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
    return 0;
}