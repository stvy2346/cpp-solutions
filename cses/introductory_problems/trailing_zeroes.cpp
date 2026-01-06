#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n;
    cin>>n;
    int ans = 0;
    for(int i=5;i<=n;i*=5) ans += n/i;
    cout<<ans<<endl;
    return 0;
}
