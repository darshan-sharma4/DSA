#include <iostream>
#include<vector>
using namespace std;


void SelectionSort(vector<int>&nums){
    int n = nums.size();
    for(int i = 0; i<n-1; i++){
        int smallestIdx = i;
        for(int j =i+1; j<n; j++){
          if(nums[j]<nums[smallestIdx]){
            smallestIdx=j;
          }
        }
        swap(nums[i],nums[smallestIdx]);
    }
}
int main(){
    vector<int>nums ={4,1,5,2,3}; //{1,4,5,2,3}
    SelectionSort(nums);
    for(int val:nums){
        cout<< val <<" ";
    }

}