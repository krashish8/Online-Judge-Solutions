/*
Problem Name: C - Trailing Loves (or L'oeufs?)
Problem ID: 1114C
Problem URL: https://codeforces.com/contest/1114/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49785382
Solution Time: 2019-02-11 22:35:44
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

map<int,int> mm;
set<int> s;

vector<int> primeFactors(int n) 
{ 
    vector<int> v;
    while (n%2 == 0) 
    { 
        v.push_back(2);
        n = n/2; 
    }  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.pb(i);  
            n = n/i; 
        } 
    } 
    if (n > 2) 
        v.push_back(n);
    for (int i = 0; i < v.size(); ++i)
    {
        s.insert(v[i]);
        mm[v[i]]++;
    }
    return v;
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
    int ans = 1000000000000000000;
    for(auto i : s) {
        int c = 0;
        int m = n;
        while (m/i != 0) {
            c+=m/i;
            m=m/i;
        }
        ans = min (ans, c/mm[i]);
    }
    cout << ans;
    return 0;
}