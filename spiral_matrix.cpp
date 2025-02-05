//Time Complexity: O(m*n)
//Space Complexity: O(1)


#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int m = matrix.size();
    int n = matrix[0].size();

    int srow = 0;
    int scol = 0;
    int erow = m-1;   
    int ecol = n-1;

    vector<int> ans;

    while( srow<=erow && scol<=ecol){
    //top
    for(int i=scol;i<=ecol;i++){
        ans.push_back(matrix[srow][i]);
    }
    //right
    for(int i=srow+1;i<=erow;i++){
        ans.push_back(matrix[i][ecol]);
    }
    //bottom
    for(int i=ecol-1;i>=scol;i--){

        if(srow==erow) break;

        ans.push_back(matrix[erow][i]);
    }
    //left
    for(int i=erow-1;i>=srow+1;i--){

        if(scol==ecol) break;

        ans.push_back(matrix[i][scol]);
    }

    srow++;
    erow--;
    scol++;
    ecol--;
    }


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
    return 0;
}