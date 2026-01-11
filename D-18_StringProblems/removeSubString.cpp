#include<iostream>
#include<string>
using namespace std;




string removeSubString(string s,string part){
    int n = s.length();
    while(s.length()>0 && s.find(part)<n){
        s.erase(s.find(part),part.length());
    }    
    return s;
}


int main(){

    string str = "ababaabcbababcbcaabc";
    string substr= "abc";
    string res = removeSubString(str,substr);
    cout<< res<<" ";
}