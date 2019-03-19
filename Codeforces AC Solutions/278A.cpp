/*
Problem Name: A - Circle Line
Problem ID: 278A
Problem URL: https://codeforces.com/contest/278/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46977043
Solution Time: 2018-12-13 20:12:10
Language: GNU C++17
Time consumed: 30 ms
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

    int n,s=0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s+=a[i];
    }
    int p, q;
    cin >> p >> q;
    if(p>q) swap(p,q);
    int sum=0;
    rep(j,p-1,q-1) {
        sum+=a[j];
    }
    cout<<min(sum,s-sum);
    return 0;
}