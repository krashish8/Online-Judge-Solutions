/*
Problem Name: D - Game with modulo
Problem ID: 1104D
Problem URL: https://codeforces.com/contest/1104/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48784641
Solution Time: 2019-01-23 11:23:34
Language: GNU C++14
Time consumed: 77 ms
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
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    //IOS;

    string s;
    while (1) {
        cin >> s;
        if(s=="end") break;
        cout << "? 0 1\n";
        char c;
        cin >> c;
        if(c==&#39;x&#39;) {cout << "! 1\n"; continue;}
        int l = 1, r = 2*l;
        while (1) {
            cout << "? " << l << " " << r << endl;
            cin >> c;
            if(c==&#39;x&#39;) break;
            l = l<<1;
            r = r<<1;
        }
        while (r - l > 1) {
            int mid = (l+r+1)/2;
            cout << "? " << l << " " << mid << endl;
            cin >> c;
            if(c==&#39;x&#39;) r = mid;
            else l = mid;
        }
        cout << "! " << r << endl;
    }
    return 0;
}