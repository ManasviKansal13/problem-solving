//Directed graph

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v,e;
    int a,b;
    cout<<"Enter the number of vertices of graph: ";
    cin>>v;
    cout<<"Enter the number of edges of graph: ";
    cin>>e;
    vector<int>Adj[v];
    for(int i=1;i<=e;i++){
        cout<<"Enter the end points of Edge "<<i<<" ";
        cin>>a>>b;
        Adj[a].push_back(b);
    }
    cout<<"The Adjacency List Representatn of the graph is: "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<": ";
        for(int j=0;j<Adj[i].size();j++)
            cout<<Adj[i][j]<<",";
        cout<<endl;
    }
    return 0;
}