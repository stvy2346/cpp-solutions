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
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        --x;--y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> color(n,-1);
    bool bipartite = true;
    for(int i=0;i<n && bipartite;i++){
        if(color[i] == -1){
            queue<int> q;
            q.push(i);
            color[i] = 1;
            while(!q.empty() && bipartite){
                int node = q.front();
                q.pop();
                for(int child : adj[node]){
                    if(color[child] == -1){
                        color[child] = 3 - color[node];
                        q.push(child);
                    }
                    else if(color[node] == color[child]){
                        bipartite = false;
                        break;
                    }
                }
            }
        }
    }
    if(!bipartite) cout<<"IMPOSSIBLE"<<endl;
    else print(color);
    return 0;
}
