#include<bits/stdc++.h>
using namespace std;

int findUniqueEl(int arr[],int n){
    int temp = arr[0];
    for(int i = 1; i<n;i++){
        temp = temp ^ arr[i];
    }
    return temp;
}

int main(){
    int arr[] = {1,3,4,1,3};
    int n = sizeof(arr)/sizeof(int);
    int ans = findUniqueEl(arr,n);
    cout<<ans<<endl;
}