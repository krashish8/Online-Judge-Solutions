/*
Problem Name: D2 - Great Vova Wall (Version 2)
Problem ID: 1092D2
Problem URL: https://codeforces.com/contest/1092/problem/D2
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47231497
Solution Time: 2018-12-18 21:19:51
Language: GNU C++17
Time consumed: 78 ms
Memory consumed: 2600 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
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
    int a[n];
    int mx=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
        if(s.empty()) {
            s.push(a[i]);
            continue;
        }
        if(s.top()!=a[i]) {
            if(s.top()<a[i]) return cout<<"NO",0;
            s.push(a[i]);
        }
        else {
        while(!s.empty() && s.top()==a[i]) {
            s.pop();
            i++;
        }
        i--;}
    }
    if(s.size()==0) cout<<"YES";
    else if(s.size()==1) {
        if(s.top()==mx)
            cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";


    return 0;
}