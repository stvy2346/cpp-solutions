#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'
#define len(x) int((x).size())

int mod = 1e9+7;

void zoro(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(3));
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        arr[i][2] = i;
    }
    sort(arr.begin(), arr.end());
    vector<int> ans(n);
    int room = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(auto &a : arr){
        int start=a[0],end=a[1],idx=a[2];
        if(!pq.empty() && pq.top().first<start){
            int alloted = pq.top().second;
            pq.pop();
            ans[idx] = alloted;
            pq.push({end,alloted});
        } 
        else{
            ans[idx] = ++room;
            pq.push({end,room});
        }
    }
    cout<<room<<endl;
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