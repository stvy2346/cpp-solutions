#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long double lld;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'
 
vector<int> v;
 
int mod = 1e9+7;
 
void solve(){
  int n;
  cin>>n;
  set<int> nums;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    nums.insert(x);
  }
  cout<<nums.size()<<endl;
}
 
signed main(){
    fast;
 
    int t=1;//cin>>t;
    while(t--){
        solve();
    }
    return 0;
}