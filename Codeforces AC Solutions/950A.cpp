/*
Problem Name: A - Left-handers, Right-handers and Ambidexters
Problem ID: 950A
Problem URL: https://codeforces.com/contest/950/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46848725
Solution Time: 2018-12-10 14:14:20
Language: GNU C++17
Time consumed: 46 ms
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




signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int l,r,a;
    cin >> l >> r >> a;
    while(a!=0) {
        if(l<r) l++,a--;
        else r++,a--;
    }
    cout<<2*min(l,r);
    return 0;
}