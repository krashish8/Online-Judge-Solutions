/*
Problem Name: B - Two Cakes
Problem ID: 1130B
Problem URL: https://codeforces.com/contest/1130/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50439071
Solution Time: 2019-02-24 18:49:16
Language: GNU C++17
Time consumed: 93 ms
Memory consumed: 1600 KB
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

int a[100005],b[100005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    for (int i = 0; i < 100005; ++i)
    {
        a[i]=b[i]=-1;
    }
    a[0]=b[0]=0;
    int n;
    cin >> n;
    for (int i = 0; i < 2*n; ++i)
    {
        int c;
        cin >> c;
        if(a[c]==-1) a[c]=i;
        else b[c]=i;
        // dbg2(a[c],b[c]);
    }
    int s = 0, t = 0;
    for (int i = 1; i<=n;i++) {
        s+=abs(a[i]-a[i-1]);
        t+=abs(b[i]-b[i-1]);
        // dbg2(s,t);
    }
    cout << s+t;

    return 0;
}