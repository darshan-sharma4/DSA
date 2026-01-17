#include <iostream>
#include <vector>

using namespace std;

// int linerSearch(int matrix[][3],int target,int row,int col){
//     for(int i =0; i<row; i++){
//         for(int j=0;j<col;j++){
//           if(matrix[i][j]==target){
//             return true;
//           }
//         }
//     }
//     return false;
// }
int maxRowSum(int matrix[][3], int target, int row, int col)
{
    int maxSum = 0;
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum += matrix[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }
    return maxSum;
}




int main()
{
    int rows = 4;
    int cols = 3;
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int res = maxRowSum(matrix, 8, rows, cols);
    cout << res << " ";
}