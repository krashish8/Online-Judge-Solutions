/*
Problem Name: A - Strange Addition
Problem ID: 305A
Problem URL: https://codeforces.com/contest/305/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51078843
Solution Time: 2019-03-09 13:28:02
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
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

    int n, c = 0, d = 0;
    cin >> n;
    int a[n];
    vector<int> v;
    rep(i,0,n) cin>>a[i];
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==0) v.pb(0);
        if(a[i]==100) v.pb(100);
    }
    for (int i = 0; i < n; ++i)
    {
        if(a[i]<10 && a[i] && c!=1) {v.pb(a[i]); c=1;}
        if(a[i]>=10 && a[i]<100 && d!=2) if(a[i]%10==0) {v.pb(a[i]); d=2;}
    }
    if(!c && !d) {
        for (int i = 0; i < n; ++i)
        {
            if(a[i]>=10 && a[i]<100) {v.pb(a[i]); break;}
        }
    }
    cout << v.size() << endl;
    for(auto i:v)
        cout << i << " ";
    return 0;
}