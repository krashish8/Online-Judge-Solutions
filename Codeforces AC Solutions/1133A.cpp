/*
Problem Name: A - Middle of the Contest
Problem ID: 1133A
Problem URL: https://codeforces.com/contest/1133/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50934418
Solution Time: 2019-03-07 18:11:30
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

    string s,t;
    cin >> s >> t;
    int a,b,c,d;
    stringstream ss;
    ss << s.substr(0,2);
    ss >> a;
    ss.clear();
    ss << s.substr(3);
    ss >> b;
    ss.clear();
    ss << t.substr(0,2);
    ss >> c;
    ss.clear();
    ss << t.substr(3);
    ss >> d;
    ss.clear();
    // dbg2(a,b) dbg2(c,d)
    int ans = (c-a)*60 + (d-b);
    ans/=2;
    // dbg(ans)
    b = b + ans;
    a+=b/60;
    b%=60;
    if(a<10) cout << 0 << a;
    else cout << a;
    cout << ":";
    if(b<10) cout << 0 << b;
    else cout << b;
    return 0;
}