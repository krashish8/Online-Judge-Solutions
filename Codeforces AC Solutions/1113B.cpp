/*
Problem Name: B - Sasha and Magnetic Machines
Problem ID: 1113B
Problem URL: https://codeforces.com/contest/1113/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50009510
Solution Time: 2019-02-16 20:04:27
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 400 KB
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

int c[105];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    int ss=0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    	c[a[i]]++;
    	ss+=a[i];
    }
    int s = inf;
    for (int i = 0; i < 105; ++i)
    {
    	if(c[i]==0) continue;
    	rep(j,1,i+1) {
    		if(i%j==0) {
    			rep(k,0,105) {
    				if(c[k]==0) continue;
    				s=min(-i+i/j+k*j-k,s);
    			}
    		}
    	}
    }
    cout << ss+s;
    return 0;
}