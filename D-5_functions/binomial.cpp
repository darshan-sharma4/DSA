#include <iostream>
using namespace std;



int fact(int n){
    int fact = 1;
    for(int i=1; i<=n ;i++){
        fact*=i;
    }
    return fact;
}

int bionomial(int n , int r){
   int result = fact(n);
   int result_1= fact(r);
   int result_2=fact(n-r);
   int final = result/(result_1*result_2);
}
int main(){
int result = bionomial(5,2);
cout <<result<<endl;
}