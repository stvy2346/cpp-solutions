#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

struct DSU{
    vector<int> parent;
    DSU(int n) : parent(n){
        iota(parent.begin(),parent.end(),0);
    }

    int find(int x){
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a,int b){
        a = find(a);
        b = find(b);
        if(a != b) parent[b] = a;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n,m;
    cin>>n>>m;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        dsu.unite(--x,--y);
    }
    set<int> components;
    for (int i=0;i<n;i++) components.insert(dsu.find(i));
    cout<<components.size()-1<<endl;
    if(components.size()){
        auto it = components.begin();
        int num = *it + 1;
        it = components.erase(it);
        while(it != components.end()){
            cout<<num<<" "<<*it + 1<<endl;
            it = components.erase(it);
        }
    }
    return 0;
}
