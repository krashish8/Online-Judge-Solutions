/*
Problem Name: A - Bar
Problem ID: 56A
Problem URL: https://codeforces.com/contest/56/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51076159
Solution Time: 2019-03-09 12:25:57
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

    string a[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n, c=0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if(s[0]<&#39;0&#39; || s[0]>&#39;9&#39;) {
            for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
            {
                if(s==a[i]) {c++; break;}
            }
        }
        else {
            if(stoi(s)<18) c++;
        }
    }
    cout << c;
    return 0;
}