#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;
 
int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int> s(n);
    vector<int> t(m);

    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<m;i++) cin>>t[i];
    
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    int len = dp[n][m];
    vector<int> ans(len,0);
    int i=n,j=m;
    while(i>0 && j>0){
        if(s[i-1] == t[j-1]){
            ans[--len] = s[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
    cout<<dp[n][m]<<'\n';
    for(int i=0;i<dp[n][m];i++) cout<<ans[i]<<" ";
    return 0;
}