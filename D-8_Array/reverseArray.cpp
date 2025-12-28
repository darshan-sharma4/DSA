#include <iostream>
using namespace std;



int reverseArray(int arr[],int size){
    int start=0;
    int end = size-1;
//    for( int start=0, end=size-1; start<=end; start++ , end--){
//        swap(arr[start],arr[end]);
       
//    }
while(start<=end){
    swap(arr[start],arr[end]);
    start++ , end--;
}
}


int main(){
int arr[]= {2,4,5,6,7,8};
int size=6;
reverseArray(arr,size);
for(int i=0; i<size; i++){
    cout<< arr[i]<<" ";
}
}