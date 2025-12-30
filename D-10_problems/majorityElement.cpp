#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute-force approach;
//  int majority(vector<int>num){
//  int n= num.size();
//  int majority=0;
//      for(int val:num){
//          int freq=0;
//          for(int el:num){
//              if(el==val){
//                  freq++;
//              }
//          }
//          if(freq>n/2){
//              return val;
//          }
//      }
//  }

// Optimize appraoch
// int majority(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     int freq = 1;
//     int ans =nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }else{
//             freq=1;
//             ans=nums[i];
//         }
//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return ans;
// }

//Moore's voting algorithm

int majority(vector<int>nums){
    int n = nums.size();
    int freq=0, ans=nums[0];
    for(int i=0;i<n; i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]) freq++;
        else{
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 2, 1, 1};
    int ans = majority(nums);
    cout << ans << " ";
}