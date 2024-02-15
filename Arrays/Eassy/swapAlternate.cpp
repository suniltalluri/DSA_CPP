#include<bits/stdc++.h>
using namespace std;


void swapAternate(int arr[], int n){
    for(int i = 1 ; i<n; i+=2){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        // swap(arr[i], arr[i-1]);
    }
}

int main(){
    int arr[] = {1,2,7,8,5};
    int n = sizeof(arr)/sizeof(int);
    swapAternate(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}