/*
Problem Name: A - Contest
Problem ID: 501A
Problem URL: https://codeforces.com/contest/501/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48465320
Solution Time: 2019-01-16 19:56:37
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 1800 KB
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
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;

int cnt[N],a[N];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int e = max(3*a/10,a-a*c/250);
    int f = max(3*b/10,b-b*d/250);
    //dbg2(e,f);
    if(e==f) cout << "Tie";
    else if(e<f) cout << "Vasya";
    else cout << "Misha";
    return 0;
}