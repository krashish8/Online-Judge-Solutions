/*
Problem Name: C - Nice Garland
Problem ID: 1108C
Problem URL: https://codeforces.com/contest/1108/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48834965
Solution Time: 2019-01-23 18:45:07
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 500 KB
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
#define dbg(x) { cout<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    string a[]={"RGB","RBG","GRB","GBR","BGR","BRG"};
    int mn = inf;
    rep(j,0,6) {
        int c = 0;
        for (int i = 0; i < n; ++i)
        {
            if(a[j][i%3]!=s[i]) c++;
        }
        if(c<mn) {
            flag = j;
            mn = c;
        }
    }
    cout << mn << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << a[flag][i%3];
    }
    return 0;
}