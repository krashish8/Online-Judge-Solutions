/*
Problem Name: A - Comparing Strings
Problem ID: 186A
Problem URL: https://codeforces.com/contest/186/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46769668
Solution Time: 2018-12-08 19:13:49
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 500 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

stack <char> st;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string s, t;
    cin >> s >> t;
    int flag=0,c=0;
    char c1,c2,c3,c4;
    if(s.length()!=t.length()) return(cout<<"NO",0);
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]!=t[i] && !flag) {c++; flag=1; c1=s[i];c2=t[i]; continue;}
        if(s[i]!=t[i] && flag) {c++; c3=s[i];c4=t[i];}
    }
    if(c1==c4 && c3==c2 && c==2) cout<<"YES";
    else cout<<"NO";
    return 0;
}