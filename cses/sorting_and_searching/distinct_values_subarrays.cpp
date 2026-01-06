#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,int> last;
    int ans = 0;
    int l = 0;
    for(int r=0;r<n;r++){
        if(last.count(arr[r]) && last[arr[r]] >= l) l = last[arr[r]] + 1;
        last[arr[r]] = r;
        ans += (r-l+1);
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

// use map instead of unordered_map