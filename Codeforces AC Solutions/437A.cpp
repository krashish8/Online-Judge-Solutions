/*
Problem Name: A - The Child and Homework
Problem ID: 437A
Problem URL: https://codeforces.com/contest/437/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50772144
Solution Time: 2019-03-04 08:46:45
Language: GNU C++17
Time consumed: 31 ms
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

    string s[4];
    vector<pii> l;
    rep(i,0,4) {
    	cin >> s[i];
    	l.pb({s[i].length()-2, i});
    }
    sort(l.begin(), l.end());
    if(2*l[0].fi<=l[1].fi && l[3].fi>=2*l[2].fi) cout << "C";
    else if(2*l[0].fi<=l[1].fi) cout << (char)(&#39;A&#39;+ l[0].se);
    else if(l[3].fi>=2*l[2].fi) cout << (char)(&#39;A&#39;+l[3].se);
    else cout << "C";
    return 0;
}