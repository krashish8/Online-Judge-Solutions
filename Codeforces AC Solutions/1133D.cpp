/*
Problem Name: D - Zero Quantity Maximization
Problem ID: 1133D
Problem URL: https://codeforces.com/contest/1133/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50966752
Solution Time: 2019-03-07 19:38:35
Language: GNU C++17
Time consumed: 202 ms
Memory consumed: 6200 KB
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

vector<pii> v;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        v.pb({a,0});
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int b;
        cin >> b;
        v[i].se = b;
        int h = __gcd(abs(v[i].fi),abs(v[i].se));
        if(h!=0) {
        v[i].fi/=h;
        v[i].se/=h;}
        else {
            cnt++;
        }
        if(v[i].fi<0) {
            v[i].fi*=-1;
            v[i].se*=-1;
        }
        if(v[i].fi==0 && v[i].se<0) v[i].se = 1;
        if(v[i].se==0 && v[i].fi<0) v[i].fi = 1;
    }
    sort(v.begin(),v.end());
    int ans = cnt;
    int i = 0;
    while (i<n) {
        if(v[i].fi==0 && v[i].se==0) {i++; continue;}
        if(v[i].fi==0 && v[i].se!=0) {i++; continue;}
        int s = 1+cnt, j = i+1;
        while (j < n) {
            if(v[j].fi==v[i].fi && v[j].se==v[i].se)
                {s++; j++;}
            else break;
        }
        ans = max(ans,s);
        i = j;
    }
    cout << ans;
    return 0;
}