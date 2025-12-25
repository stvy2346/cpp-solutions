#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

void zoro(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    set<pair<int,int>> st;
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        if(!st.empty()){
            auto it = st.upper_bound({arr[i],INT_MAX});
            while(it != st.end()){
                int idx = it->second;
                ans[idx] = i+1;
                it = st.erase(it);
            }
        }   
        st.insert({arr[i],i});
    }
    print(ans);
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}
