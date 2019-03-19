/*
Problem Name: B - Painting Eggs
Problem ID: 282B
Problem URL: https://codeforces.com/contest/282/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51398792
Solution Time: 2019-03-17 09:09:54
Language: GNU C++17
Time consumed: 872 ms
Memory consumed: 2900 KB
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

    int n;
    cin >> n;
    int a = 0, g = 0;
    string s;
    rep(i,0,n) {
    	int p, q;
    	cin >> p >> q;
    	if((a+p-g)>500) {s+=&#39;G&#39;; g+=q;}
    	else {s+=&#39;A&#39;; a+=p;}
    }
    if(abs(a-g)<=500)
    	cout << s;
    else cout << -1;
    return 0;
}