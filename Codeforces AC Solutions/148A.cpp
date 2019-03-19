/*
Problem Name: A - Insomnia cure
Problem ID: 148A
Problem URL: https://codeforces.com/contest/148/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46977560
Solution Time: 2018-12-13 20:31:37
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

int a[1005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c=0;
    rep(i,1,d+1) {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) c++;
    }
    cout<<c;
    return 0;
}