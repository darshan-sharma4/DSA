#include<iostream>
#include<vector>
using namespace std;


int singleElement(vector<int>&nums){
    int str =0;
    int end = nums.size()-1;

    while(str<=end){
        int mid = str+(end-str)/2;
        if(mid==0 && nums[mid]!=nums[mid+1]) return mid;
        if(mid==end-1 && nums[end-1]!=nums[mid-2]) return mid;
        if(nums[mid]!= nums[mid-1] && nums[mid]!= nums[mid+1]){
            return mid;
        }
        if(mid%2==0){
          if(nums[mid]==nums[mid-1]){
            end = mid-1;
           }
           else{
            str=mid+1;
           }
        }
        else{
            if(nums[mid]== nums[mid-1]){
                str = mid+1;
            }
            else{
                end =mid-1;
            }
        }
       
    }
    return -1;
}

int main(){
    vector<int> nums ={3,3,7,7,10,11,11};
    int ans = singleElement (nums);
    cout<< ans<< " ";
}