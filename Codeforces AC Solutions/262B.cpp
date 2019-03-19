/*
Problem Name: B - Roma and Changing Signs
Problem ID: 262B
Problem URL: https://codeforces.com/contest/262/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47290549
Solution Time: 2018-12-20 11:55:56
Language: GNU C++17
Time consumed: 92 ms
Memory consumed: 800 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
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

    int n,k;
    cin>>n>>k;
    int a[n];
    int mn=inf;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        mn=min(mn,abs(a[i]));
    }
    sort(a,a+n);
    for (int i = 0; i < n; ++i)
    {
        if(a[i]<0 && k>0) {a[i]*=-1; k--;}
    }
    k=k%2;
    int s=0;
    for (int i = 0; i < n; ++i)
    {
        s+=a[i];
    }
    if(k==1) s=s-2*mn;
    cout<<s;
    return 0;
}