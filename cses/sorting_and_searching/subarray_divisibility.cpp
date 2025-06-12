#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'
 
int mod = 1e9+7;
 
signed main(){
    fast;
    int n,a;
    cin >> n;
    vector<int> nums(n, -1);
    nums[0] = 0;
    int ans = 0, sums = 0;
    for (int i = 0; i < n; i++){
        cin >> a;
        sums = ((sums+a)%n+n)%n;
        ans += (++nums[sums]);
    }
    cout << ans;
    return 0;
}