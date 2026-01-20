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


int diagonalSum(int mat[][3],int row){
    int diaSum=0;
    for(int i=0; i<row; i++){
       diaSum+=mat[i][i];
       if(i != row-i-1){
        diaSum+=mat[i][row-i-1];
       }
    }
    return diaSum;
}

int main()
{
    int rows = 4;
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int res = diagonalSum(matrix,rows);
    cout<<res<<endl;
}