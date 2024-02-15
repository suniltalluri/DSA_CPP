#include<iostream>
using namespace std;

// int getMax(int arr[], int max,int si, int ei){
//     if(si > ei){
//         return max;
//     }
//     if(max < arr[si]){
//         max = arr[si];
//     }
//     if(max < arr[ei]){
//         max = arr[ei];
//     }

//     return getMax(arr, max, si+1, ei-1);

// }

int main(){
    int arr[] = {1,2,4,7,7,5};
    int max = arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);
    // int ans = getMax(arr, max,0,len-1);
    int sMax = arr[0];
    int min = arr[0];
    int smin = len;
    for(int i = 0; i<len; i++){
        if(arr[i] > max){
            sMax = max;
            max = arr[i];
        }
        else{
            if(arr[i] < max && arr[i] != max){
                sMax = arr[i];
            }
        }
        if(arr[i] < min){
            smin = min;
            min = arr[i];
        }
        if(arr[i] > min && arr[i] < smin){
                smin = arr[i];
            }
        
    }
    cout<<max<<" , "<<sMax<<endl;
    cout<<min<<" , "<<smin<<endl;
}