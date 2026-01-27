#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> &arr,int tar,int st,int end){
while(st<=end){
    int mid = st+(end-st)/2;
    if(arr[mid]==tar) {
        return mid;
    }
    else if(arr[mid]<=tar){
        return binarySearch(arr,tar,mid+1,end);
    }else{
        return binarySearch(arr,tar,st,mid-1);
    }
}
return -1;
};


int main(){
 vector<int> arr ={1,2,3,4,5,6,7};
 int n = arr.size();
 int res= binarySearch(arr,5,0,n-1);
 cout<< res<< endl;
}