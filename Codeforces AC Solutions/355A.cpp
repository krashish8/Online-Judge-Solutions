/*
Problem Name: A - Vasya and Digital Root
Problem ID: 355A
Problem URL: https://codeforces.com/contest/355/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50771779
Solution Time: 2019-03-04 08:29:17
Language: GNU C++17
Time consumed: 31 ms
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

    int k, d;
    cin >> k >> d;
    if(d==0 && k!=1) return cout << "No solution",0;
    if(k%2) {
    	for (int i = 0; i < k-1; ++i)
    	{
			cout << "18";
			i++;
    	}
    	cout << d;
    }
    else {
    	for (int i = 0; i < k-2; i+=2)
    	{
    		cout << "18";
    	}
    	cout << d << 0;
    }
    return 0;
}