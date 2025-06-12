#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;

int dp[100100][5];

int rec(int level,int last,vector<vector<int>>& arr){
    if(level >= arr.size()) return 0;
    if(dp[level][last + 1] != -1) return dp[level][last + 1];


    int ans = 0;
    for(int i=0;i<3;i++){
        if(i != last){
            ans = max(ans,arr[level][i] + rec(level+1,i,arr));
        }
    }
    
    return dp[level][last+1] = ans;
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3,0));
    for(int i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1]>>arr[i][2];

    memset(dp,-1,sizeof(dp));
    cout<<rec(0,-1,arr);

    return 0;
}