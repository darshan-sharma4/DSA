#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};

    int row= mat.size();
    int col=mat[0].size();

    for(int i =0; i< row; i++){
        for(int j =0; j<col; j++){

            cout<< mat[i][j]<<" ";
        }
        cout << endl;
    }
}