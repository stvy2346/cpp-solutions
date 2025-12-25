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
    int sx = -1,sy = -1,ex = -1,ey = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'A'){
                sx = i; 
                sy = j;
            }
            if(arr[i][j] == 'B'){
                ex = i; 
                ey = j;
            }
        }
    }
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<char>> parent(n, vector<char>(m));
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    char dir[4] = {'D','R','U','L'};
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy] = true;
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(!vis[nx][ny] && arr[nx][ny] != '#'){
                    vis[nx][ny] = true;
                    parent[nx][ny] = dir[k];
                    q.push({nx, ny});
                }
            }
        }
    }
    if(!vis[ex][ey]){
        cout<<"NO"<<endl;
        return;
    }
    string path = "";
    int x = ex, y = ey;
    while(x != sx || y != sy){
        char d = parent[x][y];
        path.push_back(d);
        if (d == 'D') x--;
        else if (d == 'U') x++;
        else if (d == 'R') y--;
        else if (d == 'L') y++;
    }
    reverse(path.begin(),path.end());
    cout<<"YES"<<endl;
    cout<<path.length()<<endl;
    cout<<path<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}
