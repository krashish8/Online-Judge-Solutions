/*
Problem Name: B - I.O.U.
Problem ID: 376B
Problem URL: https://codeforces.com/contest/376/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47377909
Solution Time: 2018-12-22 21:38:33
Language: GNU C++17
Time consumed: 15 ms
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
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m;
    cin >> n >> m;
    int aa[n+1]={0};
    while(m--) {
        int a, b, c;
        cin >> a >> b >> c;
        aa[a]-=c;
        aa[b]+=c;
    }
    int s = 0;
    for (int i = 0; i <= n; ++i)
    {
        s+=abs(aa[i]);
    }
    cout << s/2;
    return 0;
}
