#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    cout<<s.empty()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}