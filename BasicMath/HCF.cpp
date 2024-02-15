#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1 , n2;
    cin>>n1;
    cin>>n2;
    int res = 1;
    //navie approach
//    for(int i = min(n1,n2);i>=1;i--){
//         if(n1%i == 0 && n2%i == 0){
//             cout<<i<<endl;
//             break;
//         }
//    }

// Better approach
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }else{
            n2 = n2%n1;
        }
    }
    
    if(n1 == 0){
        cout<<n2<<endl;
    }else{
        cout<<n1<<endl;
    }

}