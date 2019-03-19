/*
Problem Name: A - Rook, Bishop and King
Problem ID: 370A
Problem URL: https://codeforces.com/contest/370/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51069139
Solution Time: 2019-03-09 10:04:06
Language: GNU C++17
Time consumed: 30 ms
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

    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    if(r1==r2 || c1==c2) cout << "1 ";
    else cout << "2 ";
    if(abs(r1-r2)==abs(c1-c2)) cout << "1 ";
    else if((abs(r1-r2)+abs(c1-c2))%2==0) cout << "2 ";
    else cout << "0 ";
    if(abs(r1-r2)==abs(c1-c2)) cout << abs(r1-r2);
    else if(abs(r1-r2)>abs(c1-c2)) cout << abs(r1-r2);
    else cout << abs(c1-c2);
    return 0;
}