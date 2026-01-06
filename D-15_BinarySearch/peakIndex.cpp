#include<iostream>
#include<vector>
using namespace std;


int binary(vector<int>nums){
    int str=1;
    int end = nums.size()-2;

    while(str<=end){
        int mid = str+(end-str)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(nums[mid]>=nums[mid-1] && nums[mid]<=nums[mid+1]){
            str=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums ={1,2,3,4,5,3,2,1};
    int ans= binary(nums);
    cout<< ans<<" ";
}