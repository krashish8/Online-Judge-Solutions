/*
Problem Name: B - Zuhair and Strings
Problem ID: 1105B
Problem URL: https://codeforces.com/contest/1105/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48628071
Solution Time: 2019-01-20 16:12:49
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 800 KB
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

int ch[26];
int cnt[26];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); ++i)
    {
        if(s[i]==s[i-1]) cnt[s[i]-&#39;a&#39;]++;
        else {
            ch[s[i-1]-&#39;a&#39;]+=(cnt[s[i-1]-&#39;a&#39;]+1)/k;
            cnt[s[i-1]-&#39;a&#39;]=0;
        }
    }
    ch[s[s.length()-1]-&#39;a&#39;]+=(cnt[s[s.length()-1]-&#39;a&#39;]+1)/k;
    int ans = 0;
    for (int i = 0; i < 26; ++i)
    {
        ans = max(ans, ch[i]);
    }
    cout << ans;
    return 0;
}