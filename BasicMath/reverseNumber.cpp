#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res=0;
    while(n>0){
        int el = n%10;
        res = (res * 10 ) + el;
        n=n/10;
    }
    cout<<res<<endl;
}