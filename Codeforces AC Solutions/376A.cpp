/*
Problem Name: A - Lever
Problem ID: 376A
Problem URL: https://codeforces.com/contest/376/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50772479
Solution Time: 2019-03-04 09:01:50
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 2100 KB
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
    int l=0, r=0;
    int i = 0;
    int p;
    for (int i = 0; i < s.length(); ++i)
    {
    	if(s[i]==&#39;^&#39;) p = i;
    }
    while (s[i]!=&#39;^&#39;) {
    	if(s[i]>=&#39;0&#39; && s[i]<=&#39;9&#39;) l+=(s[i]-&#39;0&#39;)*(p-i);
    	i++;
    }
    i++;
    while (i<s.length()) {
    	if(s[i]>=&#39;0&#39; && s[i]<=&#39;9&#39;) r+=(s[i]-&#39;0&#39;)*(i-p);
    	i++;
    }
    if(l==r) cout << "balance";
    else if(l<r) cout << "right";
    else cout << "left";
    return 0;
}