/*
Problem Name: A - Wizards' Duel
Problem ID: 591A
Problem URL: https://codeforces.com/contest/591/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46940219
Solution Time: 2018-12-12 19:08:08
Language: GNU C++17
Time consumed: 31 ms
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
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    
    int l,p,q;
    cin>>l>>p>>q;
    cout<<fixed<<setprecision(6)<<(double)l*p/(p+q);

    return 0;
}