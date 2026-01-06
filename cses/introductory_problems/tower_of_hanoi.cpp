#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

vector<vector<int>> ans;

void rec(int n,int src,int aux,int dest){
    if(n == 1){
        cout<<src<<" "<<dest<<endl;
        return;
    }
    rec(n-1,src,dest,aux);
    cout<<src<<" "<<dest<<endl;
    rec(n-1,aux,src,dest);
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    cout<<(1LL<<n) - 1<<endl;
    rec(n,1,2,3);
    return 0;
}
