#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,6,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    bool ans = true;
    for(int i = 1; i<len; i++){
        if(arr[i] < arr[i-1]){
            ans = false;
            break;
        }
    }
    string res = ans == true ? "Given Array is Sorted" : "Given Array is Not Sorted";
    cout<<res<<endl;
}