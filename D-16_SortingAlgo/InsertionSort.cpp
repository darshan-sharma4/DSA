#include <iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int>&nums){
    int n = nums.size();

    for(int i = 1; i<n; i++){
        int curr = nums[i];
        int prev = i-1;

        while(prev>=0 && nums[prev]>curr){
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = curr;
        
    }
}
int main(){
    vector<int>nums ={4,1,5,2,3}; //{1,4,5,2,3}
    insertionSort(nums);
    for(int val:nums){
        cout<< val <<" ";
    }

}