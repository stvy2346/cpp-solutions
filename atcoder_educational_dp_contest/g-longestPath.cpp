#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);
    vector<int> indegree(n+1,0);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        indegree[y]++;
    }    

    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indegree[i] == 0) q.push(i);
    }

    vector<int> dp(n+1,0);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            dp[v] = max(dp[v],dp[u]+1);
            indegree[v]--;
            if(indegree[v] == 0) q.push(v);
        }
    }

    cout<<*max_element(dp.begin(),dp.end())-1<<endl;;

    return 0;
}