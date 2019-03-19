/*
Problem Name: A - The Way to Home
Problem ID: 910A
Problem URL: https://codeforces.com/contest/910/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48046968
Solution Time: 2019-01-07 07:40:47
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 200 KB
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
const int N  = 150005;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, d;
    cin >> n >> d;
    char c[n];
    for (int i = 0; i < n; ++i)
    {
        cin >>  c[i];
    }
    int pos = 0, cnt = 0, jump = d;
    do
    {
        jump = d;
        while(pos + jump >=n || c[pos + jump]==&#39;0&#39;)
        {
            jump--;
            if(jump <=0 ) break;
        }
        dbg2(pos, jump);
        if(jump <=0 ) return cout << -1,0;
        pos = pos + jump;
        cnt++;
    } while (pos + jump < n);
    dbg(pos);
    if(pos!=n-1) {
        if(n-1-pos <= d) cout << cnt+1;
        else cout << -1;
    }
    else cout << cnt;
    return 0;
}