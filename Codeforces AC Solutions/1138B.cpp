/*
Problem Name: B - Circus
Problem ID: 1138B
Problem URL: https://codeforces.com/contest/1138/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51014749
Solution Time: 2019-03-08 13:07:02
Language: GNU C++17
Time consumed: 46 ms
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

int a[5][5];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    string c,d;
    cin >> c >>d;
    for (int i = 0; i < n; ++i)
    {
        a[c[i]-&#39;0&#39;][d[i]-&#39;0&#39;]++;
    }
    int ones = min(a[1][0]+a[1][1],a[0][1]+a[1][1]);
    ones = min(ones,n/2);
    for (int i = ones; i>=0; i--) {
        for (int j = 0; j <= a[1][0]; j++) {
            int k = i-j;
            if(k<0) continue;
            int l = a[1][1]-k;
            if(l<0) continue;
            int m = i-l;
            if(m<0) continue;
            int p = a[0][1]-m;
            if(p<0) continue;
            int q = n/2-(j+k+p);
            if(q<0) continue;
            int r = a[0][0]-q;
            if(r<0) continue;
            int s = n/2-(m+l+r);
            if(s<0) continue;
            // dbg2(j,k)dbg2(p,q)dbg2(m,l)dbg2(s,r)
            // dbg(i)
            for (int ii = 0; ii <n ;ii++) {
                if(c[ii]==&#39;1&#39; && d[ii]==&#39;0&#39; && j>0) {j--; cout << ii+1 << " ";}
                if(c[ii]==&#39;1&#39; && d[ii]==&#39;1&#39; && k>0) {k--; cout << ii+1 << " ";}
                if(c[ii]==&#39;0&#39; && d[ii]==&#39;1&#39; && p>0) {p--; cout << ii+1 << " ";}
                if(c[ii]==&#39;0&#39; && d[ii]==&#39;0&#39; && q>0) {q--; cout << ii+1 << " ";}
            }
            return 0;
        }
    }
    cout << -1;
    return 0;
}