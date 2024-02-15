#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int mid , int ei){
    vector<int> merged;

    int idx1 = si;
    int idx2 = mid+1;
    int k = 0;

    while(idx1 <= mid && idx2 <= ei){

    if(arr[idx1] <= arr[idx2]){
        merged.push_back(arr[idx1]);
        // merged[k++] = arr[idx1++];/
        idx1++;
    }

    if(arr[idx2] <= arr[idx1]){
        // merged[k++] = arr[idx2++];
         merged.push_back(arr[idx2]);
        idx2++;
    }

    }
    while(idx1 <= mid){
        // merged[k++] = arr[idx2++];
         merged.push_back(arr[idx2]);
        idx2++;
    }

    while(idx2 < ei){
        // merged[k++] = arr[idx2++];
         merged.push_back(arr[idx1]);
        idx1++;
    }

    for(int i = 0; i<size(merged); i++){
    cout<<merged[i]<<" ";
    }

}

void mergeSort(int arr[], int si, int ei){
    if(si > ei){
        return;
    }

    int mid = si + (ei - si)/2;

    //take left part of array
    mergeSort(arr, si, mid);

    //take right part of array
    mergeSort(arr, mid+1, ei);

    // now we need to combine two parts

    merge(arr, si, mid, ei);
}

// void demo(int arr[]){
//     arr[0] = 19;
//     cout<<arr[0];
// }

int main(){
    int arr[] ={1,3,8,2,9,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0 , n-1);
    // demo(arr);
    for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
    }
}