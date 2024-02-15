#include<iostream>
using namespace std;

void reverseArray(int arr[], int si, int ei){
    if(si > ei){
        return;
    }
    int temp = arr[si];
    arr[si] = arr[ei];
    arr[ei] = temp;
    // swap(arr[si], arr[ei]);
     reverseArray(arr, si+1, ei-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        int el;
        cin>>el;
        arr[i] = el;
    }

    reverseArray(arr, 0, n-1);

    for(int j = 0; j < n; j++){
        cout<<arr[j]<<" ";
    }

}