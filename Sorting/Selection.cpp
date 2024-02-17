#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int temp = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[temp]){
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);
    }
}

int main(){
    int arr[] = {3,1,6,2,9,7};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    printArr(arr,n);
}