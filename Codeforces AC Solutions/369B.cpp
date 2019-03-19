/*
Problem Name: B - Valera and Contest
Problem ID: 369B
Problem URL: https://codeforces.com/contest/369/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47686409
Solution Time: 2018-12-29 18:02:59
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
const int MOD = 998244353;
const int N  = 55;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,k,l,r,sa,sk;
    cin >> n >> k >> l >> r >> sa >> sk;
    int t = 2;
    while (t--) {
        int a[k],s=0;
        for (int i = 0; i < k; ++i)
        {
            a[i]=sk/k;
            s+=a[i];
        }
        s=sk-s;
        for (int i = 0; i < k , s!=0; ++i)
        {
            a[i]++;
            s--;
        }
        for (int i = 0; i < k; ++i)
        {
            cout << a[i] << " ";
        }
        k = n-k;
        sk = sa-sk;
    }


    return 0;
}