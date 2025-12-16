#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> temp;
    temp.push_back(arr[0]);
    for(int i=1;i<n;i++){
        auto it = upper_bound(temp.begin(),temp.end(),arr[i]);
        if(it != temp.end()) *it = arr[i];
        else temp.push_back(arr[i]);
    }
    cout<<temp.size()<<endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}