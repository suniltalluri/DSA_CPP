#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    // int arr[] = {10,5,10,15,10,5};
    int arr[] = {2,2,3,4,4,2};

    unordered_map<int , int> map;
    

    for(int i = 0; i<6;i++){

        map[arr[i]]++;
        
    }
    for(auto it : map){
        cout<<it.first<<"->"<<it.second<<endl;        
    }
    
    cout<<map.size()<<endl;
}