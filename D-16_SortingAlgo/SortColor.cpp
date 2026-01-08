#include <iostream>
#include<vector>
using namespace std;


// void sortColor(vector<int>&nums){
//     int n = nums.size();
//     int zero=0;
//     int ones=0;
//     int two=0;
//     for(int i =0 ; i<n; i++){
//         if(nums[i]==0){
//           zero++;
//         }
//         else if(nums[i]==1){
//             ones++;
//         }
//         else{
//             two++;
//         }
//     }
//     int idx=0;
//     for(int i =0; i<zero; i++){
//         nums[idx]=0;
//         idx++;
//     }
//     for(int i =0; i<ones; i++){
//         nums[idx]=1;
//         idx++;
//     }
//     for(int i =0; i<two; i++){
//         nums[idx]=2;
//         idx++;
//     }
   
// }

//optimize way Dutch flag algorithm;
void sortColor(vector<int>&nums){
    int n = nums.size();
    int low=0, mid =0, high=n-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++, mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int>nums ={2,0,2,1,1,0}; //{1,4,5,2,3}
    sortColor(nums);
    for(int val:nums){
        cout<< val <<" ";
    }

}