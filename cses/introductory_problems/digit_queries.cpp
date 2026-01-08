#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int digits = 1;
        int count = 9;
        while(k > digits*count){
            k -= digits*count;
            digits++;
            count *= 10;
        }
        int start = pow(10,digits-1);
        int number = start + (k-1)/digits;
        string s = to_string(number);
        cout<<s[(k-1)%digits]<<endl;
    }
    return 0;
}
