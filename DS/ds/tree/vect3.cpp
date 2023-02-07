#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    v.push_back(make_pair(1234,98));
    v.push_back(make_pair(14321,97));
    v.push_back(make_pair(1237384,97388));
    v.push_back(make_pair(1233994,93628));
    
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j].first;
        cout<<","<<v[j].second<<endl;
    }
    return 0;
}