/*
Problem Name: B - Books
Problem ID: 279B
Problem URL: https://codeforces.com/contest/279/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51432844
Solution Time: 2019-03-18 06:05:00
Language: GNU C++17
Time consumed: 92 ms
Memory consumed: 800 KB
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

int a[100005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, t;
    cin >> n >> t;
    for(int i = 1; i <= n; i++)
    	cin >> a[i], a[i] += a[i-1];
    int r = 1, mx = 0;
    for(int i = 0; i <= n; i++){
    	while(r <= n && a[r]-a[i] <= t){
 			r++;
    	}
    	mx = max(mx, r-i-1);
    }
    cout << mx;
    return 0;
}