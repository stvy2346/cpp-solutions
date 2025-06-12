#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;

int dp[101][100100];

int rec(int level,int curr,vector<pair<int,int>>& arr){
    if(level == arr.size() || curr < 0) return 0;
    if(dp[level][curr] != -1) return dp[level][curr];

    int take = 0;
    if(curr - arr[level].first >= 0) take = rec(level+1,curr-arr[level].first,arr) + arr[level].second;
    int nottake = rec(level+1,curr,arr);

    return dp[level][curr] = max(take,nottake);
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,w;
    cin>>n>>w;

    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    memset(dp,-1,sizeof(dp));
    cout<<rec(0,w,arr)<<endl;

    return 0;
}