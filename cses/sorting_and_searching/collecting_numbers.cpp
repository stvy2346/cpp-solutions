#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int n;
    cin>>n;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x] = i;
    }
    int ans = 1;
    int prev = mpp[1];
    for(int i=2;i<=n;i++){
        if(mpp[i] < prev) ans++;
        prev = mpp[i];
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