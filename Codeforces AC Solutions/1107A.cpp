/*
Problem Name: A - Digits Sequence Dividing
Problem ID: 1107A
Problem URL: https://codeforces.com/contest/1107/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49013285
Solution Time: 2019-01-26 19:47:59
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 200 KB
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
#define dbg(x) { cout<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;

 

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int t;
    cin >> t;
    while (t--) {
        int l;
        string s;
        cin >> l >> s;
        if(l==1)
        {
            cout << "NO\n";
            continue;
        }
        else if(l==2) {
            if(s[1]>s[0]) {
                cout << "YES" << endl;
                cout << "2\n";
                cout << s[0] << " " << s[1] << endl;
                continue;
            }
            else {
                cout << "NO" << endl;
                continue;
            }
        }
        else {
            cout << "YES" << endl;
            cout << "2\n";
            cout << s[0] << " " << s.substr(1) << endl;
            continue;
        }
    }
    return 0;
}