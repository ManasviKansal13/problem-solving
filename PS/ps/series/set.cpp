#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
    s.insert(1);
    s.insert(0);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(9);
    s.insert(10);
    for (auto i:s)
        cout<<i<<" ";
    cout<<endl;
    //0 is present or not
    cout<<s.count(0);
    cout<<endl;
    //8 is present or not
    cout<<s.count(8);
    //descending order set
    set<int,greater<int>>ds;
    ds.insert(2);
    ds.insert(1);
    ds.insert(0);
    ds.insert(3);
    ds.insert(2);
    ds.insert(4);
    cout<<endl;
    for (auto i:ds)
        cout<<i<<" ";
    cout<<endl;
    // 2 aur uske aage print krana hai
    set<int>::iterator it;
    it=s.find(2);
    for(it;it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //display with iterator
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //delete a number
    s.erase(s.begin());
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //cant delete end element
    s.erase(s.end());
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //find krke delete kr dena
    s.erase(s.find(2));
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}