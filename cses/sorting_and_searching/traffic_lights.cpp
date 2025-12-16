#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int x,n;
    cin>>x>>n;
    set<int> pos;
    multiset<int> lens;
    pos.insert(0);
    pos.insert(x);
    lens.insert(x);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        pos.insert(a);
        auto it = pos.find(a);
        int l = *prev(it);
        int r = *next(it);
        lens.erase(lens.find(r-l));
        lens.insert(a-l);
        lens.insert(r-a);
        cout<<*lens.rbegin()<<endl;
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