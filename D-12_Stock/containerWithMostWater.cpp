#include<iostream>
#include<vector>
using namespace std;




//Brute-force
// int maxWater(vector<int>height){

//     int n = height.size();
//     int maxWater=0;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//           int volume = min(height[i],height[j])*(j-i);
//           maxWater=max(maxWater,volume);
//         }
//     }
//     return maxWater;
// }

int maxWater(vector<int>height){

    int n = height.size();
    int maxWater=0;
    int i=0;
    int j=n-1;
    while(i<j){
        int volume = min(height[i],height[j])*(j-i);
        cout<<volume<<" ";
        maxWater=max(maxWater,volume);
        if(height[i]< height[j]){
            i++;
        }else{
            j--;
        }
    }
    return maxWater;
}




int main(){
   vector<int> height ={1,8,6,2,5,4,8,3,7};
   int ans = maxWater(height);

//    cout<< ans<<" ";
}