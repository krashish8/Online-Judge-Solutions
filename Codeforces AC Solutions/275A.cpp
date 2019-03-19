/*
Problem Name: A - Lights Out
Problem ID: 275A
Problem URL: https://codeforces.com/contest/275/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47194595
Solution Time: 2018-12-18 16:55:23
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
int a[5][5];


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    rep(i,1,4) {
        rep(j,1,4) {
            int b;
            cin>>b;
            a[i-1][j]+=b;
            a[i][j] += b;
            a[i+1][j] += b;
            a[i][j-1] += b;
            a[i][j+1] +=b;
        }
    }
    rep(i,1,4) {
        rep(j,1,4) {
            if(a[i][j]%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }

    return 0;
}