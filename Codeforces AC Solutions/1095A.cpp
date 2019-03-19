/*
Problem Name: A - Repeating Cipher
Problem ID: 1095A
Problem URL: https://codeforces.com/contest/1095/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47554920
Solution Time: 2018-12-27 17:39:04
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
const int MOD = 1073741824;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int N  = 1e6+5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=1,k=1;
    while(true) {
        if(ans-1>=n) break;
        cout<<s[ans-1];
        k++;
        ans+=k;
    }
    return 0;
}