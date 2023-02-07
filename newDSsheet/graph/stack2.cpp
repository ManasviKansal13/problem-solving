#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    int n;
    cin>>n;
    while(n!=0){
        int r=n%2;
        s.push(r);
        n=n/2;
    }
    while(!s.empty()){
        int x=s.top();
        s.pop();
        cout<<x;
    }
    return 0;
}