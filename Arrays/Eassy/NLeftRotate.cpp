#include<iostream>
using namespace std;

    void oneLeftRotate(int arr[], int len){
        int temp = arr[len-1];
        for(int i = len-2; i>=0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
    }
int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    for(int i = 0; i<d; i++){
        oneLeftRotate(arr, len);
    }

    for(int j = 0; j<len; j++){
        cout<<arr[j]<<" ";
    }
}