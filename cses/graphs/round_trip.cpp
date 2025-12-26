#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

bool found = false;
void dfs(int node,int parent,vector<int>& path,vector<bool>& vis,vector<vector<int>>& adj){
    if(found) return;
    if(vis[node]){
        if(path.size()>2){
            found = true;
            int cnt = 1;
            string ans = to_string(node+1);
            ans += " ";
            while(path.back() != node){
                ans += to_string(path.back()+1);
                ans += " ";
                cnt++;
                path.pop_back();
            }
            ans += to_string(node+1);
            cnt++;
            cout<<cnt<<endl;
            cout<<ans<<endl;
            return;
        }
    }
    vis[node] = true;
    path.push_back(node);
    for(auto child : adj[node]){
        if(child == parent) continue;
        dfs(child,node,path,vis,adj);
    }
    path.pop_back();
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        --x;--y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool> vis(n);
    for(int i=0;i<n;i++){
        if(vis[i]) continue;
        vector<int> path;
        dfs(i,-1,path,vis,adj);
    } 
    if(!found) cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
