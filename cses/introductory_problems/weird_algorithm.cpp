#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
 
int mod = 1e9+7;
 
void solve(){
   int n;
   cin>>n;
   cout<<n<<" ";
   while(n!=1){
    if(n&1){
        n*=3;
        n++;
    }
    else{
        n/=2;
    }
    cout<<n<<" ";
   }
}
 
signed main(){
    fast;
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}