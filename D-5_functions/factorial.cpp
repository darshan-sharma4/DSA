#include <iostream>
using namespace std;


int fact(int n){
    int fact = 1;
    for(int i=n; i>0; i--){
        fact*=i;
    }
    return fact;
}
int main(){
  int result = fact(5);
  cout<< result<<endl;
}