#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-2)+ fibo(n-1);
}
int main(){
int res = fibo(6);
cout<< res<< endl;
}

//O(2^n-1)  time complexity