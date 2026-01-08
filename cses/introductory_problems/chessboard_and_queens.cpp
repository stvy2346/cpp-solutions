#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define print(arr) for(auto i:arr){cout<<i<<" ";} cout<<"\n";
#define endl '\n'

int mod = 1e9+7;
int ans = 0;

bool check(int r, int c, vector<vector<char>>& board){
    for(int i=r-1;i>=0;i--) if(board[i][c] == 'q') return false;
    for(int j=c-1;j>=0;j--) if(board[r][j] == 'q') return false;
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--) if(board[i][j] == 'q') return false;
    for(int i=r-1,j=c+1;i>=0 && j<8;i--,j++) if(board[i][j] == 'q') return false;
    return true;
}


void rec(int level,vector<vector<char>>& board){
    if(level >= 8){
        ans++;
        return;
    }
    for(int i=0;i<8;i++){
        if(board[level][i] == '*') continue;
        if(check(level,i,board)){
            board[level][i] = 'q';
            rec(level+1,board);
            board[level][i] = '.';
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    vector<vector<char>> board(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++) cin>>board[i][j];
    }
    rec(0,board);
    cout<<ans<<endl;
    return 0;
}
