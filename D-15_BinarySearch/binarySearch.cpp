#include<iostream>
#include<vector>
using namespace std;


int binary(vector<int>nums,int target){
    int str=0;
    int end = nums.size()-1;

    while(str<=end){
    int mid = str + (end-str)/2;
       if(target>nums[mid]){
        str=mid+1;
       }
       else if (target<nums[mid])
       {
        end=mid-1;
       }
       else if (nums[mid]==target)
       {
        return mid;
       }
       
    }
    return -1;
}

int main(){
    vector<int> nums ={1,2,3,4,5,6,7,8,9};
    int ans= binary(nums,8);
    cout<< ans<<" ";
}