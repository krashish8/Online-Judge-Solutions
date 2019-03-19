/*
Problem Name: B - Tanya and Candies
Problem ID: 1118B
Problem URL: https://codeforces.com/contest/1118/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50173463
Solution Time: 2019-02-19 17:53:21
Language: GNU C++17
Time consumed: 61 ms
Memory consumed: 7800 KB
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
const int N  = 200005;

int so[N], se[N], lso[N], lse[N];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; ++i)
    {
    	lso[i] = s2;
    	lse[i] = s1;
    	if(i%2==0) s1+=a[i];
    	else s2+=a[i];
    }
    s1=0, s2 = 0;
    for (int i = n-1; i >= 0; --i)
    {
    	so[i] = s2;
    	se[i] = s1;
    	if(i%2==0) s1+=a[i];
    	else s2+=a[i];
    }
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(so[i]+lse[i]==se[i]+lso[i]) c++;
    }
    cout << c;
    return 0;
}