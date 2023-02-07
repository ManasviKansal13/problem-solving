#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v(5);
  cout<<"capacity "<<v.capacity()<<endl;
  cout<<"size "<<v.size()<<endl;
  v.push_back(10);
    cout<<"capacity "<<v.capacity()<<endl;
  cout<<"size "<<v.size()<<endl;
  return 0;
}