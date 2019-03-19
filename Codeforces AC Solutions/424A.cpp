/*
Problem Name: A - Squats
Problem ID: 424A
Problem URL: https://codeforces.com/contest/424/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47195017
Solution Time: 2018-12-18 17:06:42
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
int a[5][5];


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
    int c=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]==&#39;x&#39;) c++;
    }
    if(c==n/2) {
        cout<<0<<endl;
        cout<<s;
        return 0;
    }       
    else if(c<n/2) {
        c=n/2-c;
        cout<<c<<endl;
        for (int i = 0; i < n; ++i)
        {
            if(s[i]==&#39;X&#39; && c!=0) {cout<<&#39;x&#39;; c--;}
            else cout<<s[i];
        }
    }
    else {
        c=c-n/2;
        cout<<c<<endl;
        for (int i = 0; i < n; ++i)
        {
            if(s[i]==&#39;x&#39; && c!=0) {cout<<&#39;X&#39;; c--;}
            else cout<<s[i];
        }
    }
    return 0;
}