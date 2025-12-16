#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//pbds - policy based data structure                                          |->red black tree
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

 
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'
#define len(x) int((x).size())

int mod = 1e9+7;

void zoro(){
    int n,k;
    cin>>n>>k;
    //why ordered set? - to be able to use the find by order method - brute force gives TLE O(n*k + nlogn)
    ordered_set nums;
    for(int i=1;i<=n;i++) nums.insert(i);
    int pos = 0;
    while(!nums.empty()){
        pos = (pos+k)%len(nums);
        auto it = nums.find_by_order(pos);
        cout<<*it<<" ";
        nums.erase(it);
    }
}

 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
    int t=1;
    while(t--){
        zoro();
    }
    return 0;
}