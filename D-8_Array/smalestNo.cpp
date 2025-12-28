#include <iostream>
using namespace std;

int main(){

    int arr[]={10,4,20,3,-20,-69};
    int size = 6;
    int smallest = INT8_MAX;
    int largest= INT8_MIN;

    for(int i =0; i<size;i++){
        // if(arr[i]<smallest){
        //     smallest=arr[i];
        // }
        smallest = min(smallest,arr[i]);
        largest=max(largest,arr[i]);
    }
    cout<< smallest<<endl;
    cout<< largest<<endl;
    return 0;
}