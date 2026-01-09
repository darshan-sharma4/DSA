#include <iostream>
#include <vector>
using namespace std;

//Brute-force approach
// vector<int> pairSum(vector<int>num,int target){
//   vector<int>ans;
//   int n = num.size();


//   for(int i=0; i<n; i++){
//     for(int j=i+1;j<n;j++){
//         if(num[i]+num[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//         }
//     }
//   }
//   return ans;
// }


// optimize approach
vector<int> pairSum(vector<int>num, int target){
    vector<int>ans;
    int n = num.size();
    int i=0 , j=n-1;
    while (i<j){
        int pairSum= num[i]+num[j];
        if(pairSum<target){
            i++;
        }
        else if(pairSum>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    
}

int main(){
    vector<int>num ={2,7,11,15};
    int traget = 17;
    vector<int>ans = pairSum(num,traget);
    cout<<ans[0]<<" "<<ans[1]<<" ";

}