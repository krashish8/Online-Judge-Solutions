/*
Problem Name: A - Inna and Alarm Clock
Problem ID: 390A
Problem URL: https://codeforces.com/contest/390/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51226130
Solution Time: 2019-03-12 17:12:52
Language: GNU C++17
Time consumed: 61 ms
Memory consumed: 100 KB
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

set<int> s1,s2;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    while (n--) {
    	int a, b;
    	cin >> a >> b;
    	s1.insert(a);
    	s2.insert(b);
    }
    cout << min(s1.size(), s2.size());
    return 0;
}