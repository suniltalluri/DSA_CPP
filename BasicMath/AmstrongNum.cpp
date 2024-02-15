#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n;
    cin>>n;
    int len = 0;
    int temp = n;
    int orgV = n;
    while(n>0){
        len += 1;
        n = n/10;
    }
    float sum = 0;
    while(temp>0){
        int el = temp%10;
        sum += pow(el,len);
        temp = temp/10;
    }
    bool ans = sum == orgV;
    cout<<ans<<endl;
}