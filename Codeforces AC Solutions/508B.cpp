/*
Problem Name: B - Anton and currency you all know
Problem ID: 508B
Problem URL: https://codeforces.com/contest/508/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51341809
Solution Time: 2019-03-15 19:33:03
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 600 KB
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

    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ++i)
    {
    	if((s[i]-&#39;0&#39;)%2==0 && s[i]<s[n-1]) {
    		cout << s.substr(0,i) + s[n-1] + s.substr(i+1,n-2-i) + s[i];
    		return 0;
    	}
    }
    for (int i = n-1; i >= 0; i--) {
    	if((s[i]-&#39;0&#39;)%2==0) {
    		cout << s.substr(0,i) + s[n-1] + s.substr(i+1,n-2-i) + s[i];
    		return 0;
    	}
    }
    cout << -1;
    return 0;
}