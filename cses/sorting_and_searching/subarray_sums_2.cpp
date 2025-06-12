#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'
 
int mod = 1e9+7;
 
void solve(){
	int n;
    cin>>n;
    int arr[n];
    memset(arr,-1,sizeof(arr));
    int ans=0,sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum=(((sum+a)%n)+n)%n;
        arr[sum]++;
        ans+=arr[sum];
    }
    cout<<ans<<endl;
}
 
 
signed main(){
    fast;
 
    int n,x;
    cin>>n>>x;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int sum=0,count=0;
    map<int,int> map;
    map.insert({0,1});
    for(int num:nums){
        sum+=num;
        count+=map[sum-x];
        map[sum]++;
    }
    cout<<count<<endl; 
    return 0;
}