#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int si, int ei){

    if(si>ei){
        return;
    }
    int temp = arr[si];
    arr[si] = arr[ei];
    arr[ei] = temp;

    return reverseArray(arr, si+1, ei-1);
  
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr,0, n-1);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
}