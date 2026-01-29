#include<iostream>
#include<vector>

using namespace std;


void printSubset(vector<int>&arr,vector<int>&ans,int i,vector<vector<int>>&allSubsets){
    if(i==arr.size()){
       allSubsets.push_back(ans);
        return;
    }
    //include process
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1,allSubsets);
    
    //exclude
    ans.pop_back();
    printSubset(arr,ans,i+1,allSubsets);

}


int main(){
    vector<int> arr ={1,2,3};
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