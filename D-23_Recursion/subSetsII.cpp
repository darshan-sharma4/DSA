#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


void printSubset(vector<int>&arr,vector<int>&ans,int i,vector<vector<int>>&allSubsets){
    int n = arr.size();

    if(i==arr.size()){
       allSubsets.push_back(ans);
        return;
    }
    //include process
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1,allSubsets);
    
    //exclude
    ans.pop_back();
    int idx =i+1;
    while(idx <n && arr[idx]==arr[idx-1]){
        idx++;
    }
    printSubset(arr,ans,idx,allSubsets);

}


int main(){
    vector<int> arr ={1,2,2};
    vector<int> ans;
    vector<vector<int>> allSubset;
    printSubset(arr,ans,0,allSubset);

    for(int i =0; i<allSubset.size();i++){
        for(int j=0; j<allSubset.size(); j++){
            cout<< allSubset[i][j]<< " ";
        }
    }

}

// time complexity = O(2^n * n)