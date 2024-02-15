#include<bits/stdc++.h>
using namespace std;

    int getGcd(int a, int b){
        while(a > 0 && b > 0){
            if(a>b){
                a = a%b;
            }
            else{
                b = b%a;
            }
        }
        if(a == 0){
            return b;
        }
        else{
            return a;
        }
    }

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd = getGcd(n1,n2);
    int lcm = (n1*n2)/gcd;
    cout<<lcm<<endl;
}
