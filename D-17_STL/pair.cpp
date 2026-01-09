#include<iostream>
#include<vector>

using namespace std;

int main(){
    pair<int,pair<int,int>> p ={1,{2,3}};

 
    cout<< p.first<<" ";
    cout<< p.second.first<<" ";
    cout<< p.second.second;
   

    
}