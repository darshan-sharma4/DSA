#include <iostream>
using namespace std;

int decimalToBinary(int num){
int ans=0;
int pow=1;
    while(num>0){
       int rem= num%2;
        num=num/2;
        ans+=(rem*pow);
        pow*=10;

    }
    return ans;
}

int binaryToDecimal(int num){
    int ans=0;
    int pow=1;

    while(num>0){
        int rem = num%10;
        ans+=(rem*pow);
        num= num/10;
        pow*=2;
    }
    return ans;
}

int main(){
int binary = decimalToBinary(42);
int decimal =binaryToDecimal(101);
cout<<binary<<endl;
cout<<decimal<<endl;
}