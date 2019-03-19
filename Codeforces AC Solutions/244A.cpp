/*
Problem Name: A - Dividing Orange
Problem ID: 244A
Problem URL: https://codeforces.com/contest/244/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47777242
Solution Time: 2018-12-31 08:13:25
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
const int N  = 150005;

 int cnt[905];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, k;
    cin >> n >> k;
    int a[k];
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int kk=1;
    for (int i = 0; i < k; ++i)
    {
        for(int j = 0; j < n-1; ) {
            if(cnt[kk]==0) {
                cnt[kk]=1;
                cout << kk << " ";
                j++;
                kk++;
            }
            else
                kk++;
        }
        cout << a[i]<<endl;
    }
    return 0;
}