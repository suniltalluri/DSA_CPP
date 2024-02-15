#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,5,1,3,0};
    int max = arr[0];
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}