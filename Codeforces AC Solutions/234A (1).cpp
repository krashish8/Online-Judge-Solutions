/*
Problem Name: A - Lefthanders and Righthanders
Problem ID: 234A
Problem URL: https://codeforces.com/contest/234/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51076726
Solution Time: 2019-03-09 12:36:57
Language: GNU C++17
Time consumed: 30 ms
Memory consumed: 100 KB
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
    #ifndef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length()/2; ++i)
    {
        if(s[i]!=&#39;R&#39; || s[i+s.length()/2]!=&#39;L&#39;)
            cout << i+1 << " " << i+1+s.length()/2;
        else
            cout << i+1+s.length()/2 << " " << i+1;
        cout << endl;
    }
    return 0;
}