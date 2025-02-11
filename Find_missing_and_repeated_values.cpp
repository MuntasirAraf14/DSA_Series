#include<bits/stdc++.h>
using namespace std;

int main(){
vector<vector<int>> matrix = {{1,3},{2,2}};
vector<int> ans;
int n = matrix.size();
unordered_set<int> s;
int a,b;

int expSum = 0, actualSum = 0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        actualSum += matrix[i][j];

        if(s.find(matrix[i][j])!=s.end()){
            a = matrix[i][j];
            ans.push_back(a);
        }
        s.insert(matrix[i][j]);
    }
}

    expSum = (n*n) * (n*n + 1) / 2;
    b = expSum - actualSum + a;
    ans.push_back(b);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}