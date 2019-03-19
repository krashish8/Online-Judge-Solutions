/*
Problem Name: A - Palindromic Times
Problem ID: 108A
Problem URL: https://codeforces.com/contest/108/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51000772
Solution Time: 2019-03-08 09:40:38
Language: GNU C++17
Time consumed: 62 ms
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

    string s;
    cin >> s;
    int h, m;
    stringstream ss;
    ss << s.substr(0,2);
    ss >> h;
    ss.clear();
    ss << s.substr(3);
    ss >> m;
    while (true) {
        m++;
        if(m==60) {m=0; h++;}
        if(h==24) {h=0;}
        if(m>9 && h>9) {
            if(h/10 == m%10 && h%10 == m/10) break;
        }
        else if(h>9) {
            if(h%10 == 0 && h/10 == m%10) break;
        }
        else if(m>9) {
            if(m%10 == 0 && m/10 == h%10) break;
        }
        else {
            if(h==0 && m==0) break;
        }
    }
    if(h>9) cout << h;
    else cout << 0 << h;
    cout << ":";
    if(m>9) cout << m;
    else cout << 0 << m;
    return 0;
}