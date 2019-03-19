/*
Problem Name: D - Circular Dance
Problem ID: 1095D
Problem URL: https://codeforces.com/contest/1095/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47585480
Solution Time: 2018-12-27 19:15:03
Language: GNU C++17
Time consumed: 296 ms
Memory consumed: 25300 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int N  = 200005;


set<int> a[N];
int ans[N];


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
    	int aa,bb;
    	cin>>aa>>bb;
    	if(a[aa].count(bb)==1) ans[aa]=bb;
    	else a[aa].insert(bb);
    	if(a[bb].count(aa)==1) ans[bb]=aa;
    	else a[bb].insert(aa);
    	if(a[i].count(bb)==1) ans[i]=bb;
    	else a[i].insert(bb);
    	if(a[i].count(aa)==1) ans[i]=aa;
    	else a[i].insert(aa);
    }
    if(n==3) {
    	cout<<"1 2 3";
    	return 0;
    }
    int x=1;
    for (int i = 0; i < n; ++i)
    {
    	cout<<x<<" ";
    	x=ans[x];
    }
    return 0;
}