#include<iostream>
#include<vector>

using namespace std;


void getPerm(vector<int>&nums, int idx,vector<vector<int>>&ans){
int n = nums.size()-1;
if(idx==n){
    ans.push_back({nums});
}


for(int i =0; i<n;i++){
    swap(nums[idx],nums[i]);
    getPerm(nums,idx+1,ans);
    
}
}

int main(){
vector<int> nums={1,2,3};
vector<vector<int>> ans;

getPerm(nums,0,ans);
}