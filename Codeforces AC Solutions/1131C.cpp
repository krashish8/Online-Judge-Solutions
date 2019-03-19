/*
Problem Name: C - Birthday
Problem ID: 1131C
Problem URL: https://codeforces.com/contest/1131/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50358949
Solution Time: 2019-02-23 13:34:08
Language: GNU C++17
Time consumed: 30 ms
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

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    sort(a,a+n);
    int b[2*n];
    for (int i = 0; i < n; ++i)
    {
    	b[i]=a[i];
    }
    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; ++i)
    {
    	b[i+n] = a[i];
    }
    for (int i = 0; i < 2*n; i+=2)
    {
    	cout << b[i] << " ";
    }
    return 0;
}