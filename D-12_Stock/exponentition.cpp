#include <iostream>
#include<vector>
using namespace std;

// double expo(double x ,int n){
//    int binForm = n;
//    if(n<0){
//     x=1/x;
//     binForm=-binForm;
//    }
//    double ans=1;

//    while(binForm>0){
//     if(binForm%2==1){
//        ans*=x;
//     }
//     x*=x;
//     binForm/=2;
//    }

//   return ans;
// }

int bestBuy(vector<int>price )
{
    int maxProfit = 0;
    int best_Buy = price[0];
     int n = price.size();

    for(int i=1; i<n; i++){
        if(price[i]>best_Buy){
            maxProfit=max(maxProfit,price[i]-best_Buy);
        }
        best_Buy=min(best_Buy,price[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> price={7,1,5,3,6,4};
    // double ans = expo(2, 10);
    // cout << ans << " ";

    int ans = bestBuy(price);

    cout<< ans<<" ";
}