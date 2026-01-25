#include<iostream>
#include<vector>
using namespace std;



vector<int> printSpiral(vector<vector<int>>& mat){
    int m = mat.size();
    int n = mat[0].size();
    int sClm = 0, eClm = n-1;
    int sRow = 0 , eRow = m-1;
    vector<int> ans;
    while(sClm<=eClm && sRow<=eRow){
        //top boundary
        
        for(int i = sClm ; i <=eClm; i++){
            ans.push_back(mat[sRow][i]);
        }

        // right
        for(int i = sRow+1 ; i <=eRow; i++){
            ans.push_back(mat[i][eClm]);
        }

        //bottom
        for(int i = eClm-1 ; i>=sClm; i--){
            if(sRow==eRow){
                break;
            }
            ans.push_back(mat[eRow][i]);
        }

        //left
        for(int i = eRow-1 ; i>=sRow+1; i--){
            if(sClm==eClm){
                break;
            }
            ans.push_back(mat[i][sClm]);
        }
        sClm++ , eClm-- , sRow++ , eRow--;

    }
    return ans;
}

int main(){
 vector<vector<int>> mat ={{1,2,3},{4,5,6},{7,8,9}};
 
 vector<int> res = printSpiral(mat);
 int n = res.size();
 for(int i =0 ; i<n; i++ ){
    cout<< res[i]<< " ";
 }
};