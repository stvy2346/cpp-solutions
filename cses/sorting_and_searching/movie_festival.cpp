#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
 
int mod = 1e9+7;
 
void solve(){
    int n;
    cin>>n;
 
    vector<pair<int,int>> jobs(n);
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        jobs[i].first=p;
        jobs[i].second=q;
    }
    sort(jobs.begin(),jobs.end(),[] (pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });
 
    int reward=0;
    int finish=0;
    for(auto& job : jobs){
        auto& start = job.first;
        auto& end = job.second;
        if(start >= finish){
            finish=end;
            reward++;
        }
    }
    cout<<reward;
 
}
 
signed main(){
    fast;
 
    int t=1;//cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
