#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {10,5,10,15,10,5,15};
    int len = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int , int > map;
    for(int i=0; i<len; i++){
        map[arr[i]]++;
    }
    int minEl = 0;
    int maxEl =0;
    int maxF =0;
    int minF = len;
    for(auto it:map){
        int key = it.first;
        int val = it.second;
        if(val > maxF){
            maxEl=key;
            maxF=val;
        }
        if(val < minF){
            minF = val;
            minEl = key;
        }
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<maxEl<<endl;
    cout<<minEl<<endl;
}