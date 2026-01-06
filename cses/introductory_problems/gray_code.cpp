#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

vector<string> rec(int n){
    if(n == 1) return {"0","1"};
    vector<string> prev = rec(n-1);
    vector<string> revprev = prev;
    reverse(revprev.begin(),revprev.end());
    for(int i=0;i<revprev.size();i++){
        string wz = "0" + prev[i];
        prev[i] = "1" + revprev[i];
        prev.push_back(wz);
    }
    return prev;
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<string> ans = rec(n);
    print(ans);
    return 0;
}
