/*
Problem Name: Strange Currency
Problem Link: https://erdos.sdslabs.co/problems/95
Author: Ashish Kumar (ashishkr23438)
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
#define endl '\n'
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 5e5+5;

int c[10000];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    clock_t tStart = clock();
    
    int x = 0, y = 0;

    while (7*x+13*y <= 10000) {
    	while (7*x + 13*y <= 10000) {
    		c[7*x+13*y] = 1;
    		y++;
    	}
    	y = 0;
    	x++;
    }
    int mx = -1;
    for (int i = 0; i < 10000; ++i)
    {
    	if(!c[i]) mx = max(mx,i);
    }
    cout << mx;

    /*
    Or answer = xy - x - y
    (Frobenius Coin Problem)
    For integers n, x, y > 0, where x, y are relatively prime,
    every n ≥ (x−1)*(y−1) can be expressed as x*a + y*b, for a, b ≥ 0.
    */
    
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    return 0;
}
/*
71
Time Taken: 0.0070000000
*/