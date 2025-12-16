#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro() {
    int n;
    cin >> n;
    set<int> st;
    for(int i=1;i<=n;i++) st.insert(i);
    auto it = st.find(2);
    if(it == st.end()) it = st.begin();
    while(!st.empty()){
        cout<<*it<<" ";
        auto next = st.erase(it);
        if(st.empty()) break;
        if(next == st.end()) next = st.begin();
        it = next;
        it++;
        if(it == st.end()) it=st.begin();
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