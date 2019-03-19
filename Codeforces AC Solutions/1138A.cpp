/*
Problem Name: A - Sushi for Two
Problem ID: 1138A
Problem URL: https://codeforces.com/contest/1138/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51006503
Solution Time: 2019-03-08 12:12:27
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 2300 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 5e5+5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int o = 0, t = 0, ans = 0;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==1) {if(t>0) {v.pb(t); t=0;} o++;}
        else {
            if(o>0) {v.pb(o); o=0;}
            t++;
        }
    }
    if(o>0) v.pb(o);
    else v.pb(t);
    for (int i = 0; i < v.size()-1; ++i)
    {
        // dbg2(v[i],v[i+1]);
        // if(v[i]==v[i+1]) {
            ans=max(ans,min(v[i],v[i+1]));
        // }
    }
    cout << ans*2;
    return 0;
}