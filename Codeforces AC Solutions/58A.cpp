/*
Problem Name: A - Chat room
Problem ID: 58A
Problem URL: https://codeforces.com/contest/58/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46819487
Solution Time: 2018-12-09 17:18:15
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



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string s,t="hello";
    cin >> s;
    int k=0,c=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==t[k]) {c++; k++;}
    }
    if(c==t.length()) cout<<"YES";
    else cout<<"NO";
    return 0;
}