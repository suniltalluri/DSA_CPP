#include<bits/stdc++.h>
using namespace std;


int* fun(int &arr){
    return arr;
}
int main(){
    int arr[] = {1,1,2};
// int n = 9;
int* ans = fun(arr);
// cout<<n<<endl;
cout<<ans[0];

}