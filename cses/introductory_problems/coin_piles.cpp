#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(b < a) swap(a,b);
        if(a == 0 && b== 0) cout<<"YES"<<endl;
        if((a>0) && (b > 0) && ((a+b) % 3 == 0) && (2*a >= b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
