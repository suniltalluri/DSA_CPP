#include<iostream>
using namespace std;

int  getFibanacci(int n){
    if(n <= 1){
        return n ;
    }
    return getFibanacci(n-1) + getFibanacci(n-2);
}

int main(){
    int n;
    cin>>n;
    int ans = getFibanacci(n);
    cout<<ans<<endl;
}