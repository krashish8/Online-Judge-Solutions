/*
Problem Name: A - On Segment's Own Points
Problem ID: 397A
Problem URL: https://codeforces.com/contest/397/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51226568
Solution Time: 2019-03-12 17:22:38
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

int c[100];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a,b;
    cin >> a >> b;
    n--;
    while (n--) {

    	int l, r;
    	cin >> l >> r;
    	for (int i = l + 1; i <= r; i++)
    		c[i]=1;
    }
    int ans = 0;
    for (int i = a+1; i <= b; i++)
    	if(!c[i]) ans++;
    cout << ans;
    return 0;
}