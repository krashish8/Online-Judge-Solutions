/*
Problem Name: C - Meaningless Operations
Problem ID: 1110C
Problem URL: https://codeforces.com/contest/1110/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49581851
Solution Time: 2019-02-07 17:27:55
Language: GNU C++17
Time consumed: 15 ms
Memory consumed: 300 KB
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
const int MOD = 998244353;
const int N  = 5e5+5;
const int mx = 5e5;

int hi(int n) 
{ 
   int p = (int)log2(n); 
   return (int)pow(2, p);  
}  

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	if(!(n&(n+1))) {
    		if(n==3) {cout << 1 << endl; continue;}
    		if(n==7) {cout << 1 << endl; continue;}
    		if(n==15) {cout << 5 << endl; continue;}
    		if(n==31) {cout << 1 << endl; continue;}
    		if(n==63) {cout << 21 << endl; continue;}
    		if(n==127) {cout << 1 << endl; continue;}
    		if(n==255) {cout << 85 << endl; continue;}
    		if(n==511) {cout << 73 << endl; continue;}
    		if(n==1023) {cout << 341 << endl; continue;}
    		if(n==2047) {cout << 89 << endl; continue;}
    		if(n==4095) {cout << 1365 << endl; continue;}
    		if(n==8191) {cout << 1 << endl; continue;}
    		if(n==16383) {cout << 5461 << endl; continue;}
    		if(n==32767) {cout << 4681 << endl; continue;}
    		if(n==65535) {cout << 21845 << endl; continue;}
    		if(n==131071) {cout << 1 << endl; continue;}
    		if(n==262143) {cout << 87381 << endl; continue;}
    		if(n==524287) {cout << 1 << endl; continue;}
    		if(n==1048575) {cout << 349525 << endl; continue;}
    		if(n==2097151) {cout << 299593 << endl; continue;}
    		if(n==4194303) {cout << 1398101 << endl; continue;}
    		if(n==8388607) {cout << 178481 << endl; continue;}
    		if(n==16777215) {cout << 5592405 << endl; continue;}
    		if(n==33554431) {cout << 1082401 << endl; continue;}
    		// if(n==3) {cout << 1 << endl; continue;}
    		
    	}
    	else cout << (hi(n)*2-1) << endl;
    }
    return 0;
}