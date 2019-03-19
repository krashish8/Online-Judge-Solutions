/*
Problem Name: B - Mahmoud and a Triangle
Problem ID: 766B
Problem URL: https://codeforces.com/contest/766/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46658169
Solution Time: 2018-12-05 20:32:13
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 800 KB
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



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n-2; ++i)
    {
        int b=a[i],c=a[i+1],d=a[i+2];
        if(b+c>d && b+d>c && c+d>b) return(cout<<"YES",0);
    }
    cout<<"NO";
    return 0;
}