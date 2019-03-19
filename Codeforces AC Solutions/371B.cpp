/*
Problem Name: B - Fox Dividing Cheese
Problem ID: 371B
Problem URL: https://codeforces.com/contest/371/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47620442
Solution Time: 2018-12-28 15:33:28
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
const int N  = 20005;

signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m;
    cin >> n >> m;
    int d = __gcd(n, m);
    n/=d;
    m/=d;
    int c=0;
    dbg2(n,m);
    while(m%5==0) {
        m/=5;
        c++;
    }
    while(m%3==0) {
        m/=3;
        c++;
    }
    while(m%2==0) {
        m/=2;
        c++;
    }
    while(n%5==0) {
        n/=5;
        c++;
    }
    while(n%3==0) {
        n/=3;
        c++;
    }
    while(n%2==0) {
        n/=2;
        c++;
    }
    if(m==1 && n==1)
        cout << c;
    else cout<<-1;
    return 0;
}