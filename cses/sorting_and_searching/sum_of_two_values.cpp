#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'

vector<int> v;
 
int mod = 1e9+7;
 
void solve(){
  int n,x;
  cin>>n>>x;
  map<int,int> map;
  int index1=-1,index2=-1;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(map.find(a)==map.end()){
      map[x-a] = i+1;
    }
    else{
      index1=map[a];
      index2=i+1;
    }
  }
  if(index1 > -1 && index2 > -1){
    cout<<index1<<" "<<index2<<endl;
    return;
  }
  cout<<"IMPOSSIBLE\n";
  
}
 
signed main(){
    fast;
    int t=1;//cin>>t;
    while(t--){
        solve();
    }
    return 0;
}