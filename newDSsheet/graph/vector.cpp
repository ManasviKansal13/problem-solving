#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(40);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(50);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    int i;
    for(auto i:v)
        cout<<i<<" ";
    


    vector<int>hey(3,8);
    for(int i=0;i<hey.size();i++)
        cout<<hey[i]<<" ";
    v.pop_back();
    hey.pop_back();
    for(auto i:v)
        cout<<i<<" ";
    for(int i=0;i<hey.size();i++)
        cout<<hey[i]<<" ";


    cout<<endl;
    vector<int>hi[4];
    hi[0].push_back(1);
    hi[0].push_back(2);
    hi[0].push_back(3);
    hi[0].push_back(4);
    hi[1].push_back(2);
    hi[1].push_back(4);
    hi[1].push_back(6);
    hi[2].push_back(3);
    hi[2].push_back(6);
    hi[2].push_back(9);
    hi[3].push_back(4);
    hi[4].push_back(8);
    for(int i=0;i<4;i++){
        cout<<i<<": ";
        for(int j=0;j<hi[i].size();j++)
            cout<<hi[i][j]<<",";
        cout<<endl;
    }
    return 0;
}