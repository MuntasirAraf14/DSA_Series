//Time Complexity : O(log(m * n))

#include<bits/stdc++.h>
using namespace std;

bool searchInRow(vector<vector<int>>& matrix, int target, int row){
    int n=matrix[0].size();
    int i=0,j=n-1;
    while(i <= j){
        int mid = i + (j-i)/2;
        if(matrix[row][mid] == target){
            return true;
        }
        else if(matrix[row][mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size();
    int n=matrix[0].size();
    int i=0,j=m-1;
    while(i <= j){
        int midRow = i + (j-i)/2;

        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
           return searchInRow(matrix, target, midRow);
    }
        else if(target >= matrix[midRow][n-1]){
            i = midRow + 1;
        }
        else{
            j = midRow - 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}