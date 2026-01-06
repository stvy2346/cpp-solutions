#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> curr;
    curr.push_back(arr[0]);
    curr.push_back(-1*arr[0]);
    for(int i=1;i<n;i++){
        vector<int> temp;
        for(int j=0;j<curr.size();j++){
            temp.push_back(curr[j] + arr[i]);
            temp.push_back(curr[j] - arr[i]);
        }
        curr = temp;
    }
    int ans = INT_MAX;
    for(int i=0;i<curr.size();i++){
        if(curr[i] < 0) curr[i] *= -1;
        ans = min(ans,curr[i]);
    }
    cout<<ans<<endl;
    return 0;
}
