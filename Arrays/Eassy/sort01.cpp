#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" " << endl;
}

void sortOne(int arr[], int n){
    int si = 0;
    int ei = n-1;
    while(si < ei){
        if(arr[si] == 0){
            si++;
        }
        if(arr[ei] == 1){
            ei--;
        }
        if(arr[si] == 1 && arr[ei] == 0){
            swap(arr[si], arr[ei]);
            si++;
            ei--;
        }
    }
}

int main(){
    int arr[] = {1,1,1,1,0,1,1,1};
    int n = sizeof(arr)/sizeof(int);
    display(arr,n);
    sortOne(arr,n);
    display(arr,n);
}