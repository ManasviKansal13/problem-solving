//dynamic array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> V;
    cout<<endl<<"The memory allocated is "<<V.capacity();
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    cout<<endl<<"The memory allocated is "<<V.capacity();
    V.push_back(4);
    V.push_back(5);
    cout<<endl<<"no of elements are "<<V.size();
    for(auto i:V){
        cout<<endl<<" "<<i;
        //cout<<endl<<"The memory allocated is "<<V.capacity(); 
    }
    V.pop_back();
    cout<<endl;
    for(int i=0;i<V.size();i++)
        cout<<endl<<" "<<V[i];
    return 0;
}