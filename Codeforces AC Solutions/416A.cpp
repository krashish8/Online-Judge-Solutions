/*
Problem Name: A - Guess a number!
Problem ID: 416A
Problem URL: https://codeforces.com/contest/416/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51001517
Solution Time: 2019-03-08 09:59:10
Language: GNU C++17
Time consumed: 46 ms
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

    int n;
    cin >> n;
    int l = -2e9, r = 2e9;
    while (n--) {
        string s;
        cin >> s;
        int a;
        cin >> a;
        string t; 
        cin >> t;
        if(t=="N") {
            if(s==">") s="<=";
            else if(s==">=") s = "<";
            else if(s=="<") s = ">=";
            else if(s=="<=") s = ">";
        }
        if(s==">") {s=">="; a++;}
        else if(s=="<") {s="<="; a--;}

        if(s==">=") l = max(l,a);
        else if(s=="<=") r = min(r,a);
    }
    if(l<=r) cout << l;
    else cout << "Impossible";
    return 0;
}