/*
Problem Name: B - Array K-Coloring
Problem ID: 1102B
Problem URL: https://codeforces.com/contest/1102/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48191334
Solution Time: 2019-01-10 21:05:11
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 400 KB
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

int c[5005],f[5005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[i] = a[i];
        c[a[i]]++;
    }
    int mx1=0,mx2=0,m1=0,m2=0;
    for (int i = 0; i < 5001; ++i)
    {
        if(c[i]>k) return cout << "NO",0;
        if(c[i]>m1) {
            m1 = c[i];
            mx1=i;
        }
    }
    for (int i = 0; i < 5001; ++i)
    {
        if(c[i]>m2 && i!=mx1) {
            m2 = c[i];
            mx2=i;
        }
    }
    
    int c1=1;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==mx1) 
        {
            b[i]=c1;
            c1++;
            if(c1>k) c1=1;
        }
    }
    f[mx1]=1;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==mx2) 
        {
            b[i]=c1;
            c1++;
            if(c1>k) c1=1;
        }
    }
    f[mx2]=1;
    for (int i = 1; i <=5000; i++) {
        if(f[i]==1) continue;
        for (int j = 0; j < n; j++) {
            if(a[j]==i) {
                b[j]=c1;
                c1++;
                if(c1>k) c1=1;
            }
        }
        f[i]=1;
    }
    cout << "YES\n";
    for (int i = 0; i < n; ++i)
    {
        cout << b[i] << " ";
    }
    return 0;
}