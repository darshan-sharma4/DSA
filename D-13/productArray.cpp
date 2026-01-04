#include<iostream>
#include <vector>
using namespace std;




vector<int> productArray(vector<int>&nums){
    int n = nums.size();
    vector<int> ans(n,1); //[1 1 2 3]     [1 2 3 4]

    for(int i=2; i<=n; i++){
        ans[i]=ans[i-1]*nums[i-1];   
    }
    int suffix=1;
    for(int j=n-2; j>=0; j--){
        suffix=suffix*nums[j+1];
        ans[j]*=suffix;
    }
    return ans;
}





int main(){
vector<int> nums={1,2,3,4};
vector<int> ans = productArray(nums);
for(int val : ans){
    cout<< val<<" ";
}

}