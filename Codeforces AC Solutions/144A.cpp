/*
Problem Name: A - Arrival of the General
Problem ID: 144A
Problem URL: https://codeforces.com/contest/144/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46820510
Solution Time: 2018-12-09 18:00:14
Language: GNU C++17
Time consumed: 30 ms
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
    
    int n;
    cin>>n;
    int a[n],pi,px;
    int mn=101,mx=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if(a[i]<=mn) {
            mn=a[i];
            pi=i;
        }
        if(a[i]>mx) {
            mx=a[i];
            px=i;
        }
    }
    if(pi<px) px--;
    cout<<px+n-1-pi;
    return 0;
}