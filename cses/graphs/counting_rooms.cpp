#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

void zoro(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] != '#' && !(vis[i][j])){
                ans++;
                queue<pair<int,int>> q;
                q.push({i,j});
                vis[i][j] = true;
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny]!='#' && !vis[nx][ny]){
                            q.push({nx,ny});
                            vis[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}
