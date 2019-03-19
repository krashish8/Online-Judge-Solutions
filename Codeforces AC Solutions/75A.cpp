/*
Problem Name: A - Life Without Zeros
Problem ID: 75A
Problem URL: https://codeforces.com/contest/75/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50771595
Solution Time: 2019-03-04 08:17:26
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

    int a, b;
    cin >> a >> b;
    int c = a + b;
    int j = 1, m = 0, n = 0;
    while (a!=0) {
    	int d = a%10;
    	a = a/10;
    	if(d!=0) {m = m + d*j; j*=10;}
    }
    j=1;
    while (b!=0) {
    	int d = b%10;
    	b = b/10;
    	if(d!=0) {n = n+ d*j; j*=10;}
    }
    j=1;
    int p = 0;
    while (c!=0) {
    	int d = c%10;
    	c = c/10;
    	if (d!=0) {p = p + d*j; j*=10;}
    }
    int cc = n+m;
    if(cc==p) cout << "YES";
    else cout << "NO";
    return 0;
}