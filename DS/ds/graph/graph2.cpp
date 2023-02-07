//Breadth fisrt search traversalll
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<int> AdjList[],int V){
    vector<int> visited(V);
    queue<int> q;
    q.push(0);
    visited[0]=1;
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
    int V,E;
    cout<<"enter vertex";
    cin>>V;
    cout<<"enter edge";
    cin>>E;
    vector<int>AdjList[V];
    for(int i=1;i<E+1;i++){
        cout<<"enter edges"<<i;
        int a,b;
        cin>>a>>b;
        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }
    for(int i=0;i<V;i++){
        cout<<i<<":";
        for(int j=0;j<AdjList[i].size();j++)
            cout<<AdjList[i][j];
        cout<<endl;
    }
    BFS(AdjList,V);
return 0;
}
