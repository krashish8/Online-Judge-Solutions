/*
Problem Name: A - Holidays
Problem ID: 670A
Problem URL: https://codeforces.com/contest/670/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47606310
Solution Time: 2018-12-28 08:04:40
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
const int N  = 100005;




signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a1;
    a1=(n/7)*2;
    if(n%7==6) a1+=1;
    int a2;
    a2=(n/7)*2;
    if(n%7==1) a2+=1;
    else if(n%7>1) a2+=2;
    cout << a1 << " " << a2;
    return 0;
}