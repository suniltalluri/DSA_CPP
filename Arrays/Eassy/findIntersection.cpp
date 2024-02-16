#include<bits/stdc++.h>
using namespace std;

// Brute force Solution.....
// void findIntersection(int arr1[], int arr2[],int n1, int n2){
//     for(int i = 0; i<n1; i++){
//         for(int j = 0; j<n2; j++){
//             if(arr1[i] == arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
// }


// Optimized Solution...
void findIntersection(int arr1[], int arr2[], int n1, int n2){
    int i = 0; 
    int j = 0;
    while(i<n1 && j<n2){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr1[] = {1,2,2,2,3,4};
    int arr2[] = {2,2,3,3};
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    findIntersection(arr1,arr2,n1,n2);
}