#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
 
int mod = 1e9+7;
 
void solve(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
 
   int ans=0;
   int l=0;
   map<int,int> map;
   for(int i=0;i<n;i++){
    auto it= map.find(arr[i]);
    if(it != map.end()){
        l=max(l,map[arr[i]]+1);
    }
    map[arr[i]]=i;
    ans=max(ans,i-l+1);
   }
   cout<<ans<<"\n";
}
 
signed main(){
    fast;
 
    int t=1;//cin>>t;
    while(t--){
        solve();
    }
    return 0;
}