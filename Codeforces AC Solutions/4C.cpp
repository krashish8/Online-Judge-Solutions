/*
Problem Name: C - Registration System
Problem ID: 4C
Problem URL: https://codeforces.com/contest/4/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49843931
Solution Time: 2019-02-12 23:07:44
Language: GNU C++17
Time consumed: 1434 ms
Memory consumed: 1600 KB
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
#ifdef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 998244353;
const int N  = 2e5+5;
const int mx = 5e5;


signed main(){
    //freopen("input.txt","r",stdin);

    int t;
    cin >> t;
    set<string> ss;
    map<string, int> m;
    while (t--) {
        string s;
        cin >> s;
        if(ss.find(s)==ss.end()) {
            ss.insert(s);
            cout << "OK\n";
            m[s] = 0;
        }
        else {
            m[s]++;
            cout << s << m[s] << endl;
        }
    }
    return 0;
} 