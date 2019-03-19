/*
Problem Name: C - Trailing Loves (or L'oeufs?)
Problem ID: 1114C
Problem URL: https://codeforces.com/contest/1114/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49734583
Solution Time: 2019-02-10 20:30:19
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
const int N  = 2e5+5;
const int mx = 5e5;

vector<int> primeFactors(int n) 
{ 
    vector<int> ans;
    while (n%2 == 0) 
    { 
        ans.push_back(2);
        n = n/2; 
    }  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            ans.pb(i);  
            n = n/i; 
        } 
    } 
    if (n > 2) 
        ans.push_back(n);
    return ans;
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, b;
    cin >> n >> b;
    vector<int> v = primeFactors(b);
    set<int> s;
    map<int,int> m;
    for (int i = 0; i < v.size(); ++i)
    {
        s.insert(v[i]);
        m[v[i]]++;
    }
    int ans = 1000000000000000000;
    set<int>::iterator it = s.begin();
    for (int i = 0; i < s.size(); ++i, it++)
    {
        int t = *it;
        int c = 0;
        int mm = n;
        while (mm/t!=0) {
            c+=mm/t;
            mm = mm/t;
        }
        ans = min (ans, c/m[t]);
    }
    cout << ans;
    return 0;
}