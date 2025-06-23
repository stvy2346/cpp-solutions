#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main() {
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    if(arr[0][0] == '*'){
        cout<<0<<'\n';
        return 0;
    }
    dp[0][0] = 1;
    for(int j=1;j<n;j++){
        if(arr[0][j] == '*') break;
        dp[0][j] = dp[0][j-1];
    }
    for(int i=1;i<n;i++){
        if(arr[i][0] == '*') break;
        dp[i][0] = dp[i-1][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j] == '*') dp[i][j] = 0;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }
    cout << dp[n-1][n-1] << '\n';
    return 0;
}
