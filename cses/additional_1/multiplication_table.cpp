#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'
 
int mod = 1e9+7;
 
void solve(){
	int n;
	cin>>n;
	int lo=1,hi=n*n;
	int ans=0;
 
	while(lo<hi){
		int mid = (lo+hi)/2;
		for(int i=1;i<=n;i++){
			ans+=min(n,mid/i);
		}
		if(ans >= (n*n + 1)/2){
			hi=mid;
		}
		else {
			lo = mid+1;
		}
		ans=0;
	}
	cout<<hi<<endl;
}
 
 
signed main(){
    fast;
    solve();
    return 0;
}