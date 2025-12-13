#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'
 
int mod = 1e9+7;
 
void zoro(){
   int n,m,k;
   cin>>n>>m>>k;
   vector<int> a(n);
   vector<int> b(m);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    int ans = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(i<n && j<m){
        if(a[i] - k > b[j]) j++;
        else if(a[i] + k < b[j]) i++;
        else{
            ans++;
            i++;
            j++;
        }
    }
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