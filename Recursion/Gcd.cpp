#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a ;
    int b;
    cin>>a>>b;
    int ans = gcd(a, b);
    cout<<ans<<endl; 
}