#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int>(n,-1));
    vector<vector<bool>> vis(n,vector<bool>(n,false));
    queue<pair<int,int>> q;
    vis[0][0] = true;
    board[0][0] = 0;
    q.push({0,0});
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        if(x-2 >= 0){
            if(y-1 >= 0 && !vis[x-2][y-1]){
                vis[x-2][y-1] = true;
                board[x-2][y-1] = board[x][y] + 1;
                q.push({x-2,y-1});
            }
            if(y+1 < n && !vis[x-2][y+1]){
                vis[x-2][y+1] = true;
                board[x-2][y+1] = board[x][y] + 1;
                q.push({x-2,y+1});
            }
        }
        if(x+2 < n){
            if(y-1 >= 0 && !vis[x+2][y-1]){
                vis[x+2][y-1] = true;
                board[x+2][y-1] = board[x][y] + 1;
                q.push({x+2,y-1});
            }
            if(y+1 < n && !vis[x+2][y+1]){
                vis[x+2][y+1] = true;
                board[x+2][y+1] = board[x][y] + 1;
                q.push({x+2,y+1});
            }
        }
        if(y-2 >= 0){
            if(x-1 >= 0 && !vis[x-1][y-2]){
                vis[x-1][y-2] = true;
                board[x-1][y-2] = board[x][y] + 1;
                q.push({x-1,y-2});
            }
            if(x+1 < n && !vis[x+1][y-2]){
                vis[x+1][y-2] = true;
                board[x+1][y-2] = board[x][y] + 1;
                q.push({x+1,y-2});
            }
        }
        if(y+2 < n){
            if(x-1 >= 0 && !vis[x-1][y+2]){
                vis[x-1][y+2] = true;
                board[x-1][y+2] = board[x][y] + 1;
                q.push({x-1,y+2});
            }
            if(x+1 < n && !vis[x+1][y+2]){
                vis[x+1][y+2] = true;
                board[x+1][y+2] = board[x][y] + 1;
                q.push({x+1,y+2});
            }
        }
    }
    for(auto& v : board){
        for(auto& c : v) cout<<c<<" ";
        cout<<endl;
    }
    return 0;
}
