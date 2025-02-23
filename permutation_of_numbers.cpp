//Time Complexity: O(n!*n)
//Space Complexity: O(n)


#include<bits/stdc++.h>
using namespace std;


void getPerms(vector<int>& arr, int index, vector<vector<int>>& ans){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<arr.size(); i++){
        swap(arr[index], arr[i]);
        getPerms(arr, index+1, ans);
        swap(arr[index], arr[i]); //backtracking step
    }
}

vector<vector<int>> permute(vector<int>& arr) {
   vector<vector<int>> ans;
   getPerms(arr, 0, ans);
   return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = permute(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}