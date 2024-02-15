#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n){
    int temp = 0;
    for(int i = 0; i<n; i++){
        temp = temp ^ arr[i];
    }

    for(int i = 1; i<n; i++){
        temp = temp ^ i;
    }
    return temp;
}

int main(){
    int arr[] = {5,1,2,3,4,2};
    int n = sizeof(arr)/sizeof(int);
    int ans = findDuplicate(arr,n);
    cout<<ans<<endl;
}