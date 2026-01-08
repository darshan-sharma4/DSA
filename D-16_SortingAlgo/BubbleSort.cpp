#include <iostream>
#include<vector>
using namespace std;


void bubbleSort(vector<int>&nums){
    int n = nums.size();
    for(int i = 0; i<n-1; i++){
        bool isSwap = false;
        for(int j =0 ;j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwap=true;
            }  
        }
        if(!isSwap){
                return ;
        }
    }
}
int main(){
    vector<int>nums ={4,1,5,2,3}; //{1,4,5,2,3}
    bubbleSort(nums);
    for(int val:nums){
        cout<< val <<" ";
    }

}