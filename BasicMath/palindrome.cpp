#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int rev = 0;
    // int iniValue = n; 
    // while(n>0){
    //     int el =  n%10;
    //     rev = (rev*10)+el;
    //     n = n/10;
    // }
    string s ;
    getline(cin,s);
    string iniValue = s;
    string rev = "";
    int l = s.length()-1;
    while(l>=0){
        char el = s[l];
        rev += el;
        l = l-1;
    }

    if(rev == iniValue){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}