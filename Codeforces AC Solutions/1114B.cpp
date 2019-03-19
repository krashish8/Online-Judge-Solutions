/*
Problem Name: B - Yet Another Array Partitioning Task
Problem ID: 1114B
Problem URL: https://codeforces.com/contest/1114/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49705631
Solution Time: 2019-02-10 17:26:32
Language: GNU C++17
Time consumed: 140 ms
Memory consumed: 10600 KB
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
const int N  = 2e5+5;
const int mx = 5e5;

vector<pii> v;
vector<int> ans;
int a[N], b[N];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m,k; cin >> n >> m>>k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        v.pb({a[i],i});
    }
    sort(v.begin(),v.end(),greater<pii>());
    int s = 0;
    for (int i = 0; i < k*m; ++i)
    {
        b[v[i].se] = 1;
        s+=a[v[i].se];
    }
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        if(b[i]==1) c++;
        if(c==m) {ans.pb(i+1); c=0;}
    }
    cout << s << endl;
    for (int i = 0; i < ans.size()-1; ++i)
    {
        cout << ans[i] << " ";
    }
    return 0;
}