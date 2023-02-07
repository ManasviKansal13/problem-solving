#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int>Maxpq;
    // Maxpq.push(8);
    // Maxpq.push(9);
    // Maxpq.push(6);
    // Maxpq.push(4);
    // Maxpq.push(3);
    // Maxpq.push(5);
    // Maxpq.push(2);
    // Maxpq.push(0);

    // int x=Maxpq.size();
    // for(int i=0;i<x;i++){
    //     cout<<Maxpq.top()<<" ";
    //     Maxpq.pop();
    // }
    
    // cout<<Maxpq.top();
    // Maxpq.pop();
    // cout<<endl;
    // cout<<Maxpq.top();
    // cout<<endl;
    // return 0;


    priority_queue<int,vector<int>,greater<int>>Minpq;
    Minpq.push(8);
    Minpq.push(9);
    Minpq.push(6);
    Minpq.push(4);
    Minpq.push(3);
    Minpq.push(5);
    Minpq.push(2);
    Minpq.push(0);

    int x=Minpq.size();
    for(int i=0;i<x;i++){
        cout<<Minpq.top()<<" ";
        Minpq.pop();
    }
    return 0;
}