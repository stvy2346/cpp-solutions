#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a == 0 && b == 0){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        else if(a == 0 || b == 0 || a+b > n) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int tie = n-a-b;
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
            for(int i=1;i<=tie;i++) cout<<i<<" ";
            for(int i=tie+a+1;i<=n;i++) cout<<i<<" ";
            for(int i=tie+1;i<=a+tie;i++) cout<<i<<" ";
            cout<<endl;
        }
    }   
    return 0;
}
