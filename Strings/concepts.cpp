#include<bits/stdc++.h>
using namespace std;

int main(){

    string string1, string2;
    cin>>string1>>string2;
      string res = "";
        for(int i = 0 ; i<string1.length(); i++){
            for(int j = 0; j < string2.length(); j++){
                if(string2[i] != string1[j]){
                    res = res + string1[j];
                }
                cout<<"j";
            }
            cout<<" "<<endl;
        }
        // cout<<res;


    // string s = "1234";
    // int n = s[s.size()-1] - '0';
    // cout<<(int)'5';

// reverse a string.....
    // string str,res;

    // getline(cin, str);

    // for(int i = 0; i<str.size(); i++){
    //     res =str[i] + res; 

    // }
    //     cout<<res;

    // int n;
    // cin>>n;
    // cin.ignore();
    // for(int i = 0; i<n; i++){
    //     string str;
    //     getline(cin,str);
    //     cout<<str<< endl;
    // } 

    // char name[100];
    // cin >> name;
    // cout<<name;


    // string str = "hello";
    // str[0] = 'q';
    // cout<<str.size();
    
}