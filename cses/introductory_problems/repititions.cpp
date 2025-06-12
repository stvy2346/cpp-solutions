#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'
 
int mod = 1e9+7;
 
void zoro(){
    string s;
    cin>>s;
    int ans = 1, count = 1;
    int n = s.length();
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]) count++;
        else {
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
}
 
signed main(){ 
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}