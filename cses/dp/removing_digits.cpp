#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,mod);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        string s = to_string(i);
        for(auto c : s){
            int digit = c - '0';
            if(digit != 0) dp[i] = min(dp[i], dp[i - digit] + 1);
        }
    }
    cout<<dp[n]<<'\n';
    return 0;
}