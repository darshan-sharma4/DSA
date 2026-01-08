#include <iostream>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int>&A,vector<int>&B,int m , int n){
    int idx = m+n-1, i=m-1, j=n-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[idx]=A[i];
            idx--;
            i--;
        }
        else{
            A[idx]=B[j];
            idx--;
            j--;
        }
    }
    while(j>=0){
        A[idx--]=B[j--];
    }

}

int main(){
    vector<int>A ={4,5,6,0,0,0}; 
    vector<int>B ={1,2,3}; 
    mergeSortedArray(A,B,6,3);
    for(int val:A){
        cout<< val <<" ";
    }

}