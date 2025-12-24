// Find given number is a prime or not
// A number is prime when it is only divisible by 1 and number itself


#include <iostream>
using namespace std;

int main(){
    int n = 30;
    // for(int i =2 ; i<n-1; i++){
    //     if(n%i==0){
    //         cout << "Number is not prime\n";
    //         break;
    //     } else {
    //         cout << "Number is prime";
    //     }
    //     return 0;
    // }


    //optimize way

    for(int i =2 ; i*i < n-1 ;i++){ //updated
        if( n % i == 0){
            cout << "Number is not prime";
            break;
        }else{
            cout<< "Number is prime";
        }
        return 0;
    }

}