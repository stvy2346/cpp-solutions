#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n;
    cin>>n;
    if(n == 1)cout<<1<<endl;
    else if(n<=3) cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=2;i<=n;i+=2) cout<<i<<" ";
        for(int i=1;i<=n;i+=2) cout<<i<<" ";
        cout<<endl; 
    }
    return 0;
}
