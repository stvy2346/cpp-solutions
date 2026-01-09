#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int l = 1, r = 1000000000;
    while(l < r){
        int mid = l + (r-l)/2;
        cout<<"? "<<mid<<'\n';
        cout.flush();
        string response;
        cin>>response;

        if(response == "YES") l = mid+1;
        else r = mid;
    }
    cout<<"! "<<l<<'\n';
    cout.flush();
    return 0;
}
