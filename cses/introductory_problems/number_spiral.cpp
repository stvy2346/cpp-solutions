#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>y>>x;
        if(x > y){
            int n = (x-1)/2;
            int first = (n*(n+1))*4;
            if(x&1) cout<<first - y + 2<<endl;
            else cout<<first + y + 1<<endl;
        }
        else{
            int oddcount = y/2;
            oddcount*=oddcount;
            int first = oddcount*4;
            if(y&1) cout<<first + x<<endl;
            else cout<<first - x + 1<<endl;
        }
    }
    return 0;
}
