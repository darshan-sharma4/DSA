#include<iostream>
#include<vector>
using namespace std;



int reverseNumber(int n ){
int number = n;
int reverse = 0;

while(number !=0){
    int lastdigit = number%10;
    if(revrse> INT_MIN/10 || reverse<INT_MIN/10){
        return 0;
    }
    reverse=(reverse*10)+lastdigit;

    number=number/10;
}
return reverse;
}

int main(){
int n = 12362;
int res = reverseNumber(n);
cout<<res<<endl;


}