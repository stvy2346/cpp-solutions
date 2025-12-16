#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int n;
    cin>>n;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++;
    }
    int ans = 1;
    for(auto [num,f] : mpp){
        ans *= (f+1);
        if(ans >= mod) ans %= mod;
    }
    cout<<ans-1<<endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}