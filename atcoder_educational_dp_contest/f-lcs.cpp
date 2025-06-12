#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    string s,t;
    cin>>s>>t;
    
    int n = s.size(), m = t.size();
    
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    string ans = "";
    int len = dp[n][m];
    for(int i=0;i<len;i++) ans += '.';
    
    int i = n,j=m;
    while(i>0 && j>0){
        if(s[i-1] == t[j-1]){
            ans[--len] = s[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
    cout<<ans<<endl;
    return 0;
}