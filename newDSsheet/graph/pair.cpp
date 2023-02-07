#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    v.push_back(make_pair(13,9));
    v.push_back(make_pair(21,5));
    v.push_back(make_pair(29,4));
    int i;
    for(auto i:v){
        cout<<"("<<i.first<<",";
        cout<<i.second<<"),";
    }
    return 0;
}