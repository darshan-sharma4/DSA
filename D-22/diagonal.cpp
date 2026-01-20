#include <iostream>
#include <vector>
using namespace std;



int diagonalSum(int mat[][3],int row,int col){
    int diaSum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                diaSum+=mat[i][j];
            }
            else if(j==row-1-i){
                diaSum+=mat[i][j];
            }
        }
    }
    return diaSum;
// }