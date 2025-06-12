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
    int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin>>arr[i];
 
	int i=0,j=0;
	int res=0;
	int sum=0;
	while(j<n){
		sum+=arr[j];
		while(sum>x){
			sum-=arr[i];
			i++;
		}
		res+=(sum==x);
		j++;
	}
 
	cout<<res<<endl;
}
 
 
signed main(){
    fast;
    solve();
    return 0;
}