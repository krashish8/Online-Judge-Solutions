/*
Problem Name: A - Eugeny and Array
Problem ID: 302A
Problem URL: https://codeforces.com/contest/302/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50773015
Solution Time: 2019-03-04 09:25:30
Language: GNU C++17
Time consumed: 171 ms
Memory consumed: 0 KB
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
const int MOD = 1e9+7;
const int N  = 5e5+5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m ;
    cin >>n >> m;
    int c=0,d=0;
    for (int i = 0; i < n; ++i)
    {
    	int a;
    	cin >> a;
    	if(a==-1) c++;
    	else d++;
    }
    for (int i = 0; i < m; ++i)
    {
    	int l, r;
    	cin >> l >>r;
    	int dd = r-l+1;
    	if(dd<=2*min(c,d)) {
    		if(dd%2==0) cout << 1 << endl;
    		else cout << 0 << endl;
    	}
    	else {
    		cout << 0 << endl;
    	}
    }
    return 0;
}