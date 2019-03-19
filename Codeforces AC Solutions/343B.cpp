/*
Problem Name: B - Alternating Current
Problem ID: 343B
Problem URL: https://codeforces.com/contest/343/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46910845
Solution Time: 2018-12-11 19:50:43
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 400 KB
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
    
    string s;
    cin>>s;
    int p=0,m=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;+&#39;) p++;
        else m++;
    }
    if(p%2!=0 || m%2!=0) return cout<<"No",0;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if(!st.empty() && st.top()==s[i]) st.pop();
        else st.push(s[i]);
    }
    if(st.empty()) cout<<"Yes";
    else cout<<"No";
    return 0;
}