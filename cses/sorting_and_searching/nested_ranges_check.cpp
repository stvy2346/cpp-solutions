#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'
#define len(x) int((x).size())

int mod = 1e9+7;

struct Interval{
    int start;
    int end;
    int org_idx;
    Interval(int s, int e, int idx) {
        start = s;
        end = e;
        org_idx = idx;
    }
};
 
void zoro(){
    int n;
    cin>>n;
    vector<Interval> v;
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        v.emplace_back(s,e,i);
    }
    sort(v.begin(),v.end(),[](Interval &a,Interval &b){
        if(a.start == b.start) return a.end > b.end;
        return a.start < b.start;
    });
    vector<int> contained(n,0);
    vector<int> contains(n,0);
    int last = INT_MIN;
    for(int i=0;i<n;i++){
        auto curr = v[i];
        if(last != INT_MIN && last >= curr.end) contained[curr.org_idx] = 1;
        last = max(last,curr.end);
    }
    last = INT_MAX;
    for(int i=n-1;i>=0;i--){
        auto curr = v[i];
        if(last != INT_MAX && last <= curr.end) contains[curr.org_idx] = 1;
        last = min(last,curr.end);
    }
    print(contains);
    print(contained);
}

 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}