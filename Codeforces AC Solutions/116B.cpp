/*
Problem Name: B - Little Pigs and Wolves
Problem ID: 116B
Problem URL: https://codeforces.com/contest/116/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46659561
Solution Time: 2018-12-05 21:23:40
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;

 int ate[15][15];

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int a,b;
    cin>>a>>b;
    char c[a][b];
   
    rep(i,0,a) {
        rep(j,0,b) {
            cin>>c[i][j];
        }
    }
    int cn=0;
    rep(i,0,a) {
        rep(j,0,b) {
            if(c[i][j]==&#39;P&#39;) {
                if(i+1<a && c[i+1][j]==&#39;W&#39; && !ate[i+1][j]) {ate[i+1][j]=1; cn++;}
                else if(i-1>=0 && c[i-1][j]==&#39;W&#39; && !ate[i-1][j]) {ate[i-1][j]=1; cn++;}
                else if(j+1<b && c[i][j+1]==&#39;W&#39; && !ate[i][j+1]) {ate[i][j+1]=1; cn++;}
                else if(j-1>= 0 && c[i][j-1]==&#39;W&#39; && !ate[i][j-1]) {ate[i][j-1]=1; cn++;}
            }
        }
    }
    cout<<cn;
    return 0;
}