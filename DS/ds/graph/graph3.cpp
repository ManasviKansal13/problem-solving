#include<iostream>
#include<queue>
#include<vector>
void DFS_visit(int i,vector<int>& visited[],vector<int>AdjList[V],vector<int>Pi(V,-1)){
    cout<<i;
    visited[i]=1;
    for(int j=0;j<AdjList[i].size();j++){
        if(visited[i]==0){
            DFS_visit(j,visited[],AdjList[],Pi);
            Pi[j]=i;
        }
    }
}
void(vector<int>AdjList[V],int V){
    vector<int>Pi(V,-1);
    visited[0]=1;
    for(int i=0;i<V;i++){
    }
}