/*
Problem Name: Divisibility Test
Problem Link: https://erdos.sdslabs.co/problems/99
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



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    clock_t tStart = clock();
    
    int n = 10000, p = 0, q = 0;
    while (n <= 99999) {
    	int m = n, s = 0;
    	while (m!=0) {
    		int d = m%10;
    		m = m/10;
    		s += d;
    	}
    	if(s==41) q++;
    	if(s==41 && n%11 == 0) p++;
    	n++;
    }
    // Probability = 12/70
    int gcd = __gcd(p,q);
    p /= gcd;
    q /= gcd;
    // p = 6, q = 35
    cout << q - p;
    
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    return 0;
}
/*
29
Time Taken: 0.0030000000
*/