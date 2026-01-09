#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> s1;
    stack<int> s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);


    s2.swap(s1);

    cout<< s1.size()<<endl;
    cout<<s2.size();
}