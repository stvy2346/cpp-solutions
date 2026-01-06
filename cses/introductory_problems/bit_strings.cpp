#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'
 
int mod = 1e9+7;
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = (ans * 2) % mod;
    }
    cout<<ans<<endl;
    return 0;
}
