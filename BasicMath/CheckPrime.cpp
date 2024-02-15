#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool ans = false;

    for(int i = 2; i*i < n;i++){
        if(n%i == 0){
            ans = true;
            break;
        }
    }
    if(ans == true){
        cout<<"Given number is not prime"<<endl;
    }
    else{
        cout<<"Given number is  prime"<<endl;
    }
}