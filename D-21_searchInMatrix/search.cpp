#include<iostream>
#include<vector>
using namespace std;

bool searchInRow(vector<vector<int>>& mat, int target,int row){
  int col = mat[0].size();

  int st =0;
  int end = col-1;
  while (st<=end){
    int mid = st+(st-end)/2;
    if(mat[row][mid]==target){
        return true;
    }else if (target<mat[row][mid])
    {
        end = mid-1;
    } else{
        st=mid+1;
    }
    
  }
  return false;
  
}

bool searchMatrix(vector<vector<int>>& mat, int target){
    int n = mat.size();
    int col = mat[0].size();
    int st=0;
    int end = n-1;

    while(st<=end){
        int mid = st+(end-st)/2;
        if(target>=mat[mid][0] && target<= mat[mid][col-1]){
        return searchInRow(mat,target,mid);
        }else if(target<mat[mid][0]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return false;
}

int main(){
 vector<vector<int>> mat ={{1,2,3},{4,5,6},{7,8,9}};
 int target =5;
 bool res = searchMatrix(mat,target);
 cout<<res<<endl;
}