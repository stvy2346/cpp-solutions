#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
   int n,m;
   cin>>n>>m;
   multiset<int> a;
   for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
   }
   for(int i=0;i<m;i++){
        int x;
        cin>>x;
        auto it = a.upper_bound(x);
        if(it != a.begin()){
            --it;
            cout<<*it<<endl;
            a.erase(it);
        }
        else cout<<-1<<endl;
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