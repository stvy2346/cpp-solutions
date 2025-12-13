#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'
 
int mod = 1e9+7;
 
void zoro(){
   int n,x;
   cin>>n>>x;
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int i=0,j=n-1,ans = 0;
    while(j>=0 && a[j] > x) j--;
    while(i<j){
        if(a[i] + a[j] > x){
            ans++;
            j--;
        }
        else{
            i++;
            j--;
            ans++;
        }
    }
    if(i == j) ans++;
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