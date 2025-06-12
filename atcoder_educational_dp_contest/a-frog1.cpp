#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;

int dp[100100];

int rec(int level, vector<int>& arr) {
    if(level >= arr.size() - 1) return 0;
    if(dp[level] != -1) return dp[level];

    int ans = abs(arr[level] - arr[level+1]) + rec(level+1, arr);

    if(level + 2 < arr.size()) {
        ans = min(ans, abs(arr[level] - arr[level+2]) + rec(level+2, arr));
    }

    return dp[level] = ans;
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    memset(dp,-1,sizeof(dp));
    cout<<rec(0,arr)<<endl;

    return 0;
}