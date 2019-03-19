/*
Problem Name: B - Game with string
Problem ID: 1104B
Problem URL: https://codeforces.com/contest/1104/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48726036
Solution Time: 2019-01-22 17:40:39
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 1200 KB
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

stack<int> st;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(st.empty()) st.push(s[i]);
        else if(st.top()==s[i]) {c++; st.pop();}
        else st.push(s[i]);
    }
    if(c%2==0) cout << "No";
    else cout << "Yes";
    return 0;
}