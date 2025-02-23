#include<bits/stdc++.h>
using namespace std;


//i=row, j=col
void solve(int i, int j, vector<vector<int>> &maze, vector<string> &ans, string path){
    
    int n = maze.size();

    if(i < 0 || j < 0 || i >= n || j >= n || maze[i][j] == 0){
        return;
    }

    //answer path
    if(i == n-1 && j == n-1){
        ans.push_back(path);
        return;
    }

    maze[i][j] = -1; //visit

    //down
    if(i+1 < n && maze[i+1][j] == 1){
        solve(i+1, j, maze, ans, path + 'D');
    }
    //left
    if(j-1 >= 0 && maze[i][j-1] == 1){
        solve(i, j-1, maze, ans, path + 'L');
    }
    //right
    if(j+1 < n && maze[i][j+1] == 1){
        solve(i, j+1, maze, ans, path + 'R');
    }
    //up
    if(i-1 >= 0 && maze[i-1][j] == 1){
        solve(i-1, j, maze, ans, path + 'U');
    }
    maze[i][j] = 1; //unvisit
}

vector<string> findPath(vector<vector<int>> &maze){
    vector<string> ans;
    int n = maze.size();
    
    if(maze[0][0] == 0) return ans;
    string path = "";
    solve(0, 0, maze, ans, path);
    return ans;
}


int main(){
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string> ans = findPath(maze);
    for(string path: ans){
        cout<<path<<endl;
    }

    return 0;
}