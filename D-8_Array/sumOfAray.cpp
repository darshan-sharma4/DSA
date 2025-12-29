// Q. wAF to calculate sum and product of all numbers in an array  
#include <iostream>
using namespace std;


int sumOfArray(int arr[],int size){
  int sum=0;
  int prod = 1;
  for(int i =0; i<size; i++){
    sum= sum+arr[i];
    prod=prod*arr[i];
  }

  return sum;
}

int main(){
int arr[]={1,2,3,4,5};
int res = sumOfArray(arr,5);
cout<< res<<endl;
}