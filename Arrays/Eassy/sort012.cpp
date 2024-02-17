#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
}

void sortOneTwo(int arr[], int n){
    int si = 0;
    int ei = n-1;
    while(si<ei){
        if(arr[si] == 0){
            si++;
        }
        if(arr[ei] != 0){
            ei--;
        }
        if(arr[si] != 0 && arr[ei] == 0){
            swap(arr[si], arr[ei]);
            si++;
            ei--;
        }
    }
    // sort()
}

int main(){
    int arr[] = {0,1,2,2,1,0};
    int n = sizeof(arr)/sizeof(int);
    display(arr, n);
    sortOneTwo(arr, n);
    display(arr,n);
}