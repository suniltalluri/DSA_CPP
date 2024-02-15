#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,3,8,2,9,2,5,6};
    int n = sizeof(arr)/arr[0];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    } 
    for(int i = 0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
}