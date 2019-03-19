/*
Problem Name: C - Nastya Is Transposing Matrices
Problem ID: 1136C
Problem URL: https://codeforces.com/contest/1136/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51212988
Solution Time: 2019-03-12 11:56:28
Language: GNU C++17
Time consumed: 234 ms
Memory consumed: 4100 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb insert_back
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
const int MOD = 1e9+7;
const int N  = 5e5+5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m];
    rep(i,0,n) rep(j,0,m) cin >> a[i][j];
    rep(i,0,n) rep(j,0,m) cin >> b[i][j];
    rep(jj,0,m) {
    	int ii = 0;
    	multiset<int> st1, st2;
    	int i = ii, j = jj;
    	st1.insert(a[i][j]);
    	st2.insert(b[i][j]);
    	// dbg2(i,j)
    	while (j>0 && i<n-1) {
    		j--;
    		i++;
    		// dbg2(i,j);
    		st1.insert(a[i][j]);
    		st2.insert(b[i][j]);
    	}
    	if(st1!=st2) return cout << "NO",0;
    }
    // dbg(1)
    rep(ii,1,n) {
    	int jj = m-1;
    	multiset<int> st1, st2;
    	int i = ii, j = jj;
    	st1.insert(a[i][j]);
    	st2.insert(b[i][j]);
    	// dbg2(i,j)
    	while (i<n-1 and j>0) {
    		j--;
    		i++;
    		// dbg2(i,j);
    		st1.insert(a[i][j]);
    		st2.insert(b[i][j]);
    	}
    	if(st1!=st2) return cout << "NO",0;
    }
    cout << "YES";
    return 0;
}