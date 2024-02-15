#include<iostream>
using namespace std;

int findTarget(int arr[], int len, int target, int si, int ei){
    if(si>ei){
        return -1;
    }
    int mid = si+(ei-si)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(target < arr[mid]){
        return findTarget(arr, len, target, si, mid-1);

    }else{

        return findTarget(arr, len, target, mid+1, ei);
    }

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int ans = findTarget(arr,len,target, 0, len-1);
    cout<<ans<<endl;
}