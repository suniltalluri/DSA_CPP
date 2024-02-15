#include<iostream>
#include<vector>
using namespace std;

void findUnion(int arr1[], int arr2[], int len1, int len2, vector<int> Union){
    int i = 0;
    while(i < len1 && i < len2){
        if(arr1[i] == arr2[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }
    // while(i>len1-1){
    //     Union.push_back(arr1[i]);
    //     cout<<"working"<<" ";
    //     i++;
    // }
    // while(i>len2-1){
    //     Union.push_back(arr2[i]);
    //     cout<<"working"<<" ";
    //     i++;
    // }
}

int main(){
   int  arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> Union;

    findUnion(arr1, arr2,len1, len2, Union);

    for(auto it : Union){
        cout<<it<<" ";
    }

    // for(int i = 0; i<Union.size();i++){
    //     cout<<Union[i]<<" ";
    // }

}