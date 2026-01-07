#include<iostream>
#include<vector>
using namespace std;


int singleElement(vector<int>&nums){
    int n = nums.size();
    if(n==1) return nums[0];
    int str =0;
    int end = n-1;

    while(str<=end){
        int mid = str+(end-str)/2;
        if(mid==0 && nums[mid]!=nums[mid+1]) return mid;
        if(mid==end && nums[end]!=nums[mid-1]) return mid;
        if(nums[mid]!= nums[mid-1] && nums[mid]!= nums[mid+1]){
            return mid;
        }
        
        if(mid%2==0){//even
          if(nums[mid]==nums[mid-1]){//left
            end = mid-1;
           }
           else{//right
            str=mid+1;
           }
        }
        else{//odd
            if(nums[mid]== nums[mid-1]){//right
                str = mid+1;
            }
            else{
                end =mid-1;//left
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