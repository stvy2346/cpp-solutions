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
	string s;
	cin>>s;
	int k=s.size();
	map<char,int> map;
	for(int i=0;i<k;i++){
		map[s[i]]++;
	}
	string ans="";
	int count=0;
	char extra='a';
	int extracount=0;
	for(auto it=map.begin();it!=map.end();it++){
		char ch=it->first;
		int n=it->second;
		if(n&1) {
		    count++;
		    if(count>1){
		        cout<<"NO SOLUTION\n";
		        return;
		    }
		    extra=ch;
		    extracount=n;
		}
		
		else{
		    for(int i=0;i<n/2;i++){
    			ans+=ch;
    		}
		}
	}
	if(count==1){
	    cout<<ans;
	    for(int i=0;i<extracount;i++) cout<<extra;
	    reverse(ans.begin(),ans.end());
	    cout<<ans<<endl;
	    return;
	}
	cout<<ans;
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
}
 
 
signed main(){
    fast;
    solve();
    return 0;
}