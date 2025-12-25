#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

void zoro(){
    int n;
    cin>>n;
    int maxi=0,sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        maxi = max(maxi,x);
        sum += x;
    }
    sum -= maxi;
    cout<<(sum >= maxi ? sum + maxi : 2*maxi)<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}
