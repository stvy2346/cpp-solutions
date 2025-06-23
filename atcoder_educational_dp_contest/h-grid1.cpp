#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> arr(h, vector<char>(w));
    vector<vector<int>> dp(h, vector<int>(w, 0));

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> arr[i][j];
        }
    }

    if(arr[0][0] == '#' || arr[h-1][w-1] == '#'){
        cout << 0 << '\n';
        return 0;
    }

    dp[0][0] = 1;
    for(int j = 1; j < w; j++){
        if(arr[0][j] == '#') break;
        dp[0][j] = dp[0][j-1];
    }
    for(int i = 1; i < h; i++){
        if(arr[i][0] == '#') break;
        dp[i][0] = dp[i-1][0];
    }
    for(int i = 1; i < h; i++){
        for(int j = 1; j < w; j++){
            if(arr[i][j] == '#') dp[i][j] = 0;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }
    cout << dp[h-1][w-1] << '\n';
    return 0;
}
