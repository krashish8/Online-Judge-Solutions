/*
Problem Name: A - Superhero Transformation
Problem ID: 1111A
Problem URL: https://codeforces.com/contest/1111/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49404811
Solution Time: 2019-02-03 18:40:31
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 300 KB
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
const int MOD = 998244353;
const int N  = 5e5+5;
const int mx = 5e5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s,t;
    cin >> s >> t;
    if(s.length()!=t.length()) return cout << "No",0;
    for (int i = 0; i < s.length(); ++i)
    {
    	if(s[i]==&#39;a&#39; || s[i]==&#39;e&#39; || s[i]==&#39;o&#39; ||s[i]==&#39;i&#39; ||s[i]==&#39;u&#39;)
    		s[i]=&#39;a&#39;;
    	else 
    		s[i]=&#39;b&#39;;
    	if(t[i]==&#39;a&#39; || t[i]==&#39;e&#39; || t[i]==&#39;o&#39; ||t[i]==&#39;i&#39; ||t[i]==&#39;u&#39;)
    		t[i]=&#39;a&#39;;
    	else 
    	   t[i]=&#39;b&#39;;
    	
    }
    if(s==t) cout << "Yes";
    else cout << "No";
    return 0;
}