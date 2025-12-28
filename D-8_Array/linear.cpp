#include <iostream>
using namespace std;



int linear(int arr[], int size,int target){
  for(int i=0; i<size; i++){
    if(arr[i]==target){
     return i;
    }
  }
  return -1;
}


int main(){
int arr[]={2,6,20,38,4,6};
int res = linear(arr,6,4);
cout<< res<<endl;
}