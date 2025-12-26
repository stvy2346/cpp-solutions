#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool> vis(n+1,false);
    vector<int> parent(n+1);
    iota(parent.begin(),parent.end(),0);
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto child : adj[node]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                parent[child] = node;
            }
        }
    }
    if(parent[n] == n) cout<<"IMPOSSIBLE"<<endl;
    else{
        vector<int> ans;
        int node = n;
        while(parent[node] != node){
            ans.push_back(node);
            node = parent[node];
        }
        reverse(ans.begin(),ans.end());
        cout<<ans.size()+1<<endl;
        cout<<1<<" ";
        print(ans);
    }
    return 0;
}
