#include <iostream>
#include <vector>
using namespace std;

// int main(){
// int arr[5]={1,2,3,4,5};

// int n=5;
// // printing all subarray
// for(int st=0 ; st<n ; st++){
//     for(int end=st; end<n; end++){
//         for(int i=st ; i<=end; i++){
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
// }
// }


//  brute-force appraoch to find the max subarray sum

// int main(){
//     int arr[]={3,-4,5,-1,7,-8};
//     int n =6;
//     int max_sum=INT8_MIN;

//     for(int st=0; st<n; st++){
//         int currSum = 0;
//         for(int end=st; end<n;end++){
//           currSum+=arr[end];
//           max_sum=max(currSum,max_sum);
//         }
//     }
//     cout<< max_sum<<endl;

// }



//kadane's algorithm

int main(){
    int arr[]={3,-4,5,-1,7,-8};
    int n =6;
    int max_sum=INT8_MIN;
    int currSum=0;
    for(int val:arr){
        currSum+=val;
        max_sum=max(currSum,max_sum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<< max_sum<<endl;

}
