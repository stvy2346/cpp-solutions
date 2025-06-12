#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
 
int mod = 1e9+7;
 
void solve(){
   int n;
   cin>>n;
 
   map<int,int> map;
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    map[a]=1;
    map[b]=-1;
   }
   int ans=0,count=0;
   for(auto it = map.begin();it!=map.end();it++){
    count+=it->second;
    ans=max(ans,count);
   }
   cout<<ans<<'\n';
}
 
signed main(){
    fast;
    int t=1;//cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
