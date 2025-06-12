#include<bits/stdc++.h>
using namespace std;
 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define endl '\n'

int mod = 1e9+7;
 
void zoro(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++) cin>>arr[i];
 
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i] != i+1){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<n<<endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}