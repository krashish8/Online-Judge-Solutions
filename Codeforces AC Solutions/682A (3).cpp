/*
Problem Name: A - Alyona and Numbers
Problem ID: 682A
Problem URL: https://codeforces.com/contest/682/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46544054
Solution Time: 2018-12-03 16:37:31
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define inf 2e9+9
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m;
    cin>>n>>m;
    if(n>m) swap(n,m);
    int s=(n+m)/5;
    int ans=5*s*(s+1)/2-s;
    int s1=n/5+1;
    int s2=m/5;
    int sub1 = s2*(s2+1)/2-(s1-1)*s1/2;
    sub1=sub1*5-(n+1)*(s2-s1+1);
    int sub2 = s*(s+1)/2-s2*(s2+1)/2;
    sub2 = sub2*5*2 - (n+m+2)*(s-s2);
    cout<<ans-sub1-sub2;
    return 0;
}