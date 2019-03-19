/*
Problem Name: B - Wrath
Problem ID: 892B
Problem URL: https://codeforces.com/contest/892/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51299864
Solution Time: 2019-03-14 16:56:04
Language: GNU C++17
Time consumed: 327 ms
Memory consumed: 15600 KB
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

int c[1000005];

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
    int id = n;
    for (int i = n-1; i>=0; i--) {
    	
    	if(i>=id) c[i] = 1;
    	else {id = n;}
    	id = min(id,i-a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(!c[i]) ans++;
    }
    cout << ans;
    return 0;
}