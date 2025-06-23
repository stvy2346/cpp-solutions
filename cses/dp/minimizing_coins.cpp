#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> dp(x+1);
    dp[0] = 0;

    for(int i=1;i<=x;i++){
        for(int j = 0;j<n;j++){
            if(arr[j] <= i){
                dp[i] = min(1+dp[i-arr[j]],dp[i]);
            }
        }
    }
    cout << (dp[x] == mod ? -1 : dp[x]) << endl;
    return 0;
}