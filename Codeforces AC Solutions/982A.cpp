/*
Problem Name: A - Row
Problem ID: 982A
Problem URL: https://codeforces.com/contest/982/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47008747
Solution Time: 2018-12-14 18:18:37
Language: GNU C++17
Time consumed: 31 ms
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
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 && s[0]==&#39;0&#39;) return cout<<"No",0;
    if(n==1 && s[0]==&#39;1&#39;) return cout<<"Yes",0;
    for (int i = 0; i < n-1; ++i)
    {
        if(s[i]==s[i+1] && s[i]==&#39;1&#39;) return cout<<"No",0;
    }
    if((s[0]==&#39;0&#39; && s[1]==&#39;0&#39;) || (s[n-1]==&#39;0&#39; && s[n-2]==&#39;0&#39;)) return cout<<"No",0;
    for (int i = 0; i < n-2; ++i)
    {
        if(s[i]==&#39;0&#39; && s[i+1]==&#39;0&#39; && s[i+2]==&#39;0&#39;) return cout<<"No",0;
    }
    cout<<"Yes";
    return 0;
}