#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define int long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'
 
int mod = 1e9+7;
 
int n,k;
int arr[200100];
 
int solve(int mid){
    int sumleft=0;
    int parts=0;
 
    for(int i=0;i<n;i++){
        if(sumleft >= arr[i]){
            sumleft-=arr[i];
        }
        else{
            parts++;
            if(parts>k) return 0;
            sumleft=mid;
            if(sumleft >= arr[i]){
                sumleft-=arr[i];
            }
            else{
                return 0;
            }
        }
    }
    return 1;
}
 
 
signed main(){
    fast;
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
 
    int hi=sum;
    int lo=0;
    int ans = sum;
 
    if(k!=1){
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(solve(mid)){
                ans = mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}