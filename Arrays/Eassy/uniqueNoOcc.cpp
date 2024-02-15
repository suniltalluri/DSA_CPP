#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,1,1,3};
    unordered_map<int, int > mp;

    for(auto it : arr){
        mp[it]++;
    }
    
    unordered_set<int> set;

    for(auto it : mp){
        set.insert(it.second);
    }

    if(mp.size() == set.size()){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }


}