/*
Problem Name: B - Magic, Wizardry and Wonders
Problem ID: 231B
Problem URL: https://codeforces.com/contest/231/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49688080
Solution Time: 2019-02-10 12:07:28
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 300 KB
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
const int MOD = 998244353;
const int N  = 5e5+5;
const int mx = 5e5;

vector<int> v;
vector<int> g[1005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, d, l;
    cin >> n >> d >> l;
    if(d > (n+1)/2*l-n/2 || d < (n+1)/2-l*(n/2)) return cout << -1, 0;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = 1;
    }
    int s;
    if(n%2==0) s = 0; else s = 1;
    if(d > s) {
        for (int i = 0; i < n; i+=2)
        {
            if(s==d) break;
            int t = min(l-1,(d-s));
            a[i]+=t;
            s+=t;
        }
    }
    else if(d < s) {
        for (int i = 1; i < n; i+=2)
        {
            if(s==d) break;
            int t = min(l-1, (s-d));
            a[i]+=t;
            s-=t;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}