/*
Problem Name: B - Substring Removal
Problem ID: 1096B
Problem URL: https://codeforces.com/contest/1096/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47637561
Solution Time: 2018-12-28 18:12:20
Language: GNU C++17
Time consumed: 31 ms
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
const int MOD = 998244353;
 

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    string s;
    cin >> n >> s;
    char c1=s[0], c2=s[n-1];
    int cn1=0,cn2=0,id1=0,id2=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]==c1) cn1++;
        else {id1=i;break;}
    }
    if(id1==0) {
        cout<<((n*(n-1)/2)%MOD+n%MOD)%MOD;
        return 0;
    }
    for(int i = n-1; i>=0; i--) {
        if(s[i]==c2) cn2++;
        else {id2=i;break;}
    }
    int ans;
    ans = (cn1+cn2+1)%MOD;
    dbg(ans);
    dbg2(id1,id2);
    if(c1==c2) {
        ans += (id1%MOD)*(n-id2-1)%MOD;
    }
    cout << ans%MOD;
    return 0;
}