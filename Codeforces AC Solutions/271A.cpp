/*
Problem Name: A - Beautiful Year
Problem ID: 271A
Problem URL: https://codeforces.com/contest/271/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46856490
Solution Time: 2018-12-10 18:11:04
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    for (int i = n+1; ; ++i)
    {
        string s = to_string(i);
        rep(j,0,s.length()) {
            rep(k,j+1,s.length()) {
                if(s[j]==s[k]) goto a;
            }
        }
        cout<<i;
        return 0;
        a:;
    }
    return 0;
}