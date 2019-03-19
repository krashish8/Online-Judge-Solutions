/*
Problem Name: A - Array
Problem ID: 300A
Problem URL: https://codeforces.com/contest/300/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50764201
Solution Time: 2019-03-04 01:02:30
Language: GNU C++17
Time consumed: 60 ms
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

    int n;
    cin >> n;
    int a[n], c = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i]<0) c++;
    }
    sort(a,a+n);
    cout << 1 << " " << a[0] << endl;
    if(c%2)
    {
        cout << n-2 << " ";
        for (int i = 1; i < n; ++i)
        {
            if(a[i]==0) continue;
            cout << a[i] << " " ;
        }
        cout << endl;
        cout << "1 0";
    }
    else {
        cout << n-3 << " ";
        rep(i,2,n) {
            if(a[i]==0) continue;
            cout << a[i] << " ";
        }
        cout << endl;
        cout <<"2 0 " << a[1];
    }
    return 0;
}