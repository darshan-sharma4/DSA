#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    // priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(4);
    pq.push(6);
    
    while(!pq.empty()){

        cout<<pq.top()<<endl;
        pq.pop();
    }
    
}