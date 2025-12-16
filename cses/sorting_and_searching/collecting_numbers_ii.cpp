#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]] = i;
    }
    mpp[0] = 0;
    mpp[n+1] = n+1;
    int ans = 1;
    for(int i=2;i<=n;i++) if(mpp[i] < mpp[i-1]) ans++;
    while(m--){
        int i,j;
        cin>>i>>j;
        if(i>j) swap(i,j);
        i--;
        j--;
        int x = arr[i];
        int y = arr[j];
        if(mpp[x+1] > i && mpp[x+1] < j) ans++;
        if(mpp[x-1] > i && mpp[x-1] < j) ans--;
        if(mpp[y+1] > i && mpp[y+1] < j) ans--;
        if(mpp[y-1] > i && mpp[y-1] < j) ans++;
        if(x == y+1) ans--;
        if(x == y-1) ans++;
        cout<<ans<<endl;
        swap(arr[i],arr[j]);
        mpp[x] = j;
        mpp[y] = i;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}