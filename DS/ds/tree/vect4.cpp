#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v[3];
    v[0].push_back(1);
    v[0].push_back(2);
    v[0].push_back(3);
    v[1].push_back(9);
    v[1].push_back(8);
    v[2].push_back(89);
    v[2].push_back(67);
    v[2].push_back(55);
    v[2].push_back(80);
    v[2].push_back(87);

    
    //cout<<"capacity "<<v.capacity()<<endl;
    //cout<<"size "<<v.size()<<endl;
    for(int i=0;i<3;i++){
        cout<<i<<":";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}