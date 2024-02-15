#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,0,1,0,4,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int j = 0; j<len; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<len; i++){
        if(arr[i] != 0){
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++; 
        }
    }
    //display array elements
    for(int j = 0; j<len; j++){
        cout<<arr[j]<<" ";
    }
}