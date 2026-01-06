#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n;
    cin >> n;
    if(n%4 == 1 || n%4 == 2){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    vector<int> s1, s2;
    if(n%4 == 0){
        for(int i=1;i<=n;i+=4){
            s1.push_back(i);
            s1.push_back(i+3);
            s2.push_back(i+1);
            s2.push_back(i+2);
        }
    } 
    else{ 
        s1.push_back(1);
        s1.push_back(2);
        s2.push_back(3);
        for(int i=4;i<=n;i+=4){
            s1.push_back(i);
            s1.push_back(i+3);
            s2.push_back(i+1);
            s2.push_back(i+2);
        }
    }
    cout<<s1.size()<<endl;
    for(int x : s1) cout<<x<<" ";
    cout<<endl;
    cout<<s2.size()<<endl;
    for(int x : s2) cout<<x<<" ";
    cout<<endl;
    return 0;
}
