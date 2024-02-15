#include<bits/stdc++.h>
using namespace std;

void findAllDuplicates(int arr[], int n){
    for(int i = 0; i<n; i++){
        int temp = abs(arr[i]) - 1;

        if(arr[temp] < 0){
            cout<<temp+1<<" ";
        }

        arr[temp] = arr[temp] * -1;
    }
}

int main(){
    int arr[] = {1,1,2};
    int n = sizeof(arr)/sizeof(int);
    findAllDuplicates(arr, n);
}