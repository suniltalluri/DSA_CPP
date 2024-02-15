#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];
    for(int i =1 ; i<len;i++){
        arr[i-1] = arr[i];
    }
    arr[len-1] = temp;
    for(int j = 0; j<len; j++){
        cout<<arr[j]<<" ";
    }
}