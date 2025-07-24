#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void solve(vector<vector<int>>& maze, int r, int c, string path, vector<string>& ans, vector<vector<bool>> &visited){
    int n=maze.size();
    if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0|| visited[r][c]==true) return;
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;

    }

    visited[r][c]=true;

    solve(maze,r+1,c,path+"D",ans,visited);
    solve(maze,r-1,c,path+"U",ans,visited);
    solve(maze,r,c+1,path+"R",ans,visited);
    solve(maze,r,c-1,path+"L",ans,visited);

    visited[r][c]=false;

}
vector<string> ratInMaze(vector<vector<int>> &maze){
    int n=maze.size();
    vector<string> ans;
    string path="";
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    solve(maze,0,0,path,ans,visited);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
     vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    vector<string > ans= ratInMaze(maze);

    for(string path: ans){
        cout<<path<<endl;
    }
    return 0;
}
