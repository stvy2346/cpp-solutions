#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
 
int mod = 1e9+7;
 
int seen[1000100];
 
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        seen[x]++;
    }
    for(int i=1000000;i>=1;i--){
        int cnt=0;
        for(int j=i;j<=1000000;j+=i){
            cnt+=seen[j];
        }
        if(cnt>1){
            cout<<i<<"\n";
            return;
        }
    }
 
}
 
signed main(){
    fast;
    solve();
    return 0;
}