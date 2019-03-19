/*
Problem Name: B - Gena's Code
Problem ID: 614B
Problem URL: https://codeforces.com/contest/614/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48527652
Solution Time: 2019-01-18 12:52:48
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
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;

int ck(string s) {
    int cnt = 0;
    for(int i = s.length()-1; i>=1; i--) {
        if(s[i]==&#39;0&#39;) cnt++;
        else return 0;
    }
    if(s[0]==&#39;1&#39;)
        return cnt;
    else return 0;
}


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int cnt = 0;
    string p="1";
    for (int i = 0; i < n; ++i)
    {
        string a;
        cin >> a;
        if(a=="0") return cout << 0,0;
        if(a=="1") continue;
        if(ck(a)) cnt += ck(a);
        else {
            p = a;
        }
    }
    cout << p;
    for (int i = 0; i < cnt; ++i)
    {
        cout << 0;
    }

}