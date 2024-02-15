#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,5,7,12,4,6};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    bool isFind = false;
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            // cout<<"true";
            isFind = true;
        }
    }

    if(isFind == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}