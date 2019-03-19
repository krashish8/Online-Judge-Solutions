/*
Problem Name: B - Dreamoon and WiFi
Problem ID: 476B
Problem URL: https://codeforces.com/contest/476/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46681117
Solution Time: 2018-12-06 15:08:30
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;

int fact(int n) {
    if(n==0) return 1;
    int s=1;
    for (int i = 1; i <= n; ++i)
    {
        s*=i;
    }
    return s;
}

int ncr(int n,int r) {
    return(fact(n)/(fact(r)*fact(n-r)));
}


signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string s,t;
    cin>>s>>t;
    int p=0,m=0;
    int pp=0,mm=0,q=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;+&#39;) p++;
        else if(s[i]==&#39;-&#39;) m++;
    }
    for (int i = 0; i < t.length(); ++i)
    {
        if(t[i]==&#39;+&#39;) pp++;
        else if(t[i]==&#39;-&#39;) mm++;
        else q++;
    }
    if(q==0 && pp==p && mm==m) {cout<<fixed<<setprecision(12)<<1.0; return 0;}
    if(mm>m || pp>p) {cout<<fixed<<setprecision(12)<<0.0; return 0;}

    cout<<fixed<<setprecision(12)<<ncr(q,p-pp)/(double)pow(2,q);
    return 0;
}