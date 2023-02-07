//ajacent list , degree of every matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V,E;
    cout<<"Enter the no of vertices: ";
    cin>>V;
    cout<<"Enter the no of edges: ";
    cin>>E;
    vector<int>AdjList[V];
    int a,b;
    for(int i=1;i<=E;i++){
        cout<<"The end point of Edge "<<i;
        cin>>a>>b;
        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }
    for(int i=0;i<V;i++){
        cout<<i<<":";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<"The degrees of respective vertices are: ";
    for(int i=0;i<V;i++){
        cout<<i<<":";
        int count=0;
        for(int j=0;j<AdjList[i].size();j++){
            count =AdjList[i].size();
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}