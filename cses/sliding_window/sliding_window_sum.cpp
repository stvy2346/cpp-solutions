#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    vector<int> arr;
    arr.push_back(x);
    for(int i=1;i<n;i++){
        int num = arr.back();
        arr.push_back((a*num + b)%c);
    }
    int ans = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(i >= k) sum -= arr[i-k];
        if(i >= k-1) ans ^= sum;
    }
    cout<<ans<<endl;
    return 0;
}
