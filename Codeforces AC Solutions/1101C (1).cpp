/*
Problem Name: C - Division and Union
Problem ID: 1101C
Problem URL: https://codeforces.com/contest/1101/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48278510
Solution Time: 2019-01-12 09:53:44
Language: GNU C++17
Time consumed: 93 ms
Memory consumed: 3400 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long int
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
const int MOD = 998244353;
const int N  = 1e5+5;
const int mx = 5e5;

int ans[N];
pair<pii,int> p[N];


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i].fi.fi >> p[i].fi.se;
            p[i].se = i;
        }
        sort(p,p+n);
        ans[p[0].se] = 1;
        int r = p[0].fi.se;
        for (int i = 1; i < n; i++) {
            int l = p[i].fi.fi;
            int aa = ans[p[i-1].se];
            if(l>r) {
                if(aa==1) aa=2;
                else aa=1;
            }
            ans[p[i].se] = aa;
            r = max(r,p[i].fi.se); 
        }int flag=0;
        for (int i = 0; i < n; ++i)
        {
            if(ans[i]==2) {flag=1; break;}
        }
        if(flag==0) { cout << -1 << endl; continue;}
        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}