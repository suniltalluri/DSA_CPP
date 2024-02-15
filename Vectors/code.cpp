#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> list{1,2,3,4,5};
    vector<int> v;
    list.push_back(2);
    list.push_back(3);
    // auto it = list.begin();
    // list.insert(it,3);
  auto a = list.begin();
  auto e = list.end();
  // list.insert(e,5);
  

    // cout <<list[2]<< endl;
    // cout<<list.back()<<endl;
    // cout<<v.empty()<<endl;
    list.insert(list.begin()+1, 6);
    // cout<<list.back()<<endl;
    // cout <<list[1]<< endl;
    // bool c = list.count(list.begin(),list.end(),2);
    cout<<count(list.begin(),list.end(),6)<<endl;
}  