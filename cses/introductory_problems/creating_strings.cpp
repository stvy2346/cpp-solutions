#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> arr;
    do{
        arr.push_back(s);
    }while (next_permutation(s.begin(), s.end()));

    cout<<arr.size()<<'\n';
    for(auto c : arr) cout<<c<<'\n';
    return 0;
}