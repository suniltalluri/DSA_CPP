#include<bits/stdc++.h>
using namespace std;

int partision(int arr[], int si, int ei){
    int pivot = arr[si];
    int cnt = 0;
    for(int  i = si + 1; i<=ei; i++){

    if(arr[i] <= pivot){
        cnt++;
      }
    }

    int pivoteIdx = cnt + si;
    swap(arr[pivoteIdx], arr[si]);

    int i = si;
    int j = ei;
    while(i < pivoteIdx && j > pivoteIdx){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < pivoteIdx && j>pivoteIdx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivoteIdx;
}

void quickSort(int arr[], int n, int si, int ei){
    if(si>= ei){
        return;
    }
    int p = partision(arr,si, ei);
    quickSort(arr, n,si, p-1);
    quickSort(arr,n, p+1, ei);
}

int main(){
    int arr[] = {2,1,3,6,5,4};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr,n,0,n-1);
     for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


}