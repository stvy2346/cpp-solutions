#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

void zoro(){
    int n;
    cin >> n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    sort(arr.begin(),arr.end());
    int ans = 0;
    int curr = 0;
    for(int i = 0; i < n; i++) {
        curr += arr[i].first;
        ans += (arr[i].second-curr);
    }
    cout<<ans;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}