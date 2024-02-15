#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    string word ="the sky is blue";
    int n = word.length();
    int i = 0;
    int j = n-1;
    while(i<= j && word[i] == ' ') i++;
    while(j>=0 && word[j] == ' ') j--;
    
    string s = word.substr(i, j+1);

    vector<string> res ;
    stringstream ss(s);
    string w;
    while(ss >> w){
        res.push_back(w);
    }

    string out = "";

    for (int i = res.size() - 1; i >= 0; i--) {
        out += res[i] + " ";
    }
    cout<<out;



    // int j = n-1;
    // string temp="";
    // string ans = "";
    // while(i<=j){
    //     char ch = s[i];
    //     if(ch != ' '){
    //         temp += ch;
    //     }else{
    //         if(ch == ' '){
    //             if(ans != " ") ans = temp + " " + ans;
    //             else ans = temp; 
    //         }
    //         temp = "";
    //     }
    //     i++;
    // }
    // if(temp != " "){
    //     if(ans != " ") ans = temp + " " + ans;
    //     else ans = temp; 
    // }
    // cout<<ans;
}