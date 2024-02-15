#include<bits/stdc++.h>
using namespace std;

bool binearySearch(int arr[], int target, int n, int si, int ei){
   if(si>ei){
    return false;
   }

   int mid = si + (ei - si)/2;
   if(arr[mid] == target){
    return true;
   }
   else if(target <=  arr[mid]){
    return binearySearch(arr, target, n, si, mid);
   }
    return binearySearch(arr, target, n, mid+1,ei);

//    return binearySearch(arr, target, n, si+1, ei-1);
    
}

int main(){
     int arr[] = {1,2,3,4,5,6};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int target = 12;
    bool ans = binearySearch(arr, target, n,0,n-1);
    cout<<ans;
}