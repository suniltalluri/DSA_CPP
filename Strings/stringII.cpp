#include<iostream>
using namespace std;


string largenumstring(string str){
    int i = 0;
    int n = str.length()-1;
    while(n >= 0){
        if((int(str[n])-48)%2 != 0){
            return str.substr(0,n+1);
        }
        // cout<<str[n];
        n--;
    }
    return " ";
}

int main(){
    string str = "52";


    string ans = largenumstring(str);
    cout<<ans;





    // navie approach.....

    // string str = "35427";
    // int n = str.length();
    // int num1 = stoi(str);
    // int larger = int(str[0])-48;
    // if(num1%2 != 0 ){
    //     larger = num1;
    // }

    // int i = 0;
    // while(i<n){
    //     int e = int(str[i])-48;
    //     if(e % 2 != 0){
    //         if(e > larger){
    //             larger = e;
    //         cout<<e<<endl;
    //         }
    //     }
    //     else{
    //     cout<<" ";
    //     break;
    // }
    //     // cout<<e<<endl;
    //     i++;
    // }
    // if(larger % 2 != 0) cout<<larger;
   
}