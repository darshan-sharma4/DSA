#include <iostream>
using namespace std;


int sumOfDigits(int num){
    int sumOfDigits =0;

    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        sumOfDigits+=lastDigit;
    }
    return sumOfDigits;

}

int main(){
int result = sumOfDigits(245);
cout<< result<<endl;
}