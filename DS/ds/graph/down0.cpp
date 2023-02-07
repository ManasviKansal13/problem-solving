#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void DownToZero(vector<int>AdjList[],int N){
    vector<int>(Status[],N+1);
    queue<int>q;
    q.push(0);
    Status[q.front()]++;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int j=0;j<AdjList[x].size();j++){
            if(visited[AdjList[x][j]]==0){
                q.push(AdjList[x][j]);
                visited[AdjList[x][j]]=1;
            }
        }
        cout<<x<<" ";
    }
}
int main(){
    int N=12;
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
    DownToZero(Adj[],12);
    return 0;
}