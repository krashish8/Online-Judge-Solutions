/*
Problem Name: B - Complete the Word
Problem ID: 716B
Problem URL: https://codeforces.com/contest/716/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47673331
Solution Time: 2018-12-29 10:32:03
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 200 KB
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

int cnt[26];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s, t;
    cin >> s;
    int l = s.length();
    if(l<26) return cout << -1, 0;
    int flag = 0;
    for (int i = 0; i <= l-26; ++i)
    {
        t = s.substr(i,26);
        memset(cnt,0,sizeof(cnt));
        for(int j = 0; j < 26; j++) {
            if(t[j]!=&#39;?&#39;)
            cnt[t[j]-&#39;A&#39;]++;
        }
        flag = 0;
        for(int j = 0; j < 26; j++) {
            if(cnt[j]>1) {flag=1; break;}
        }
        if(flag==0) break;
    }
    if(flag==1)
        cout << -1;
    else {
        queue <char> q;
        for (int i = 0; i < 26; ++i)
        {
            if(cnt[i]==0) q.push(i+&#39;A&#39;);
        }
        flag=0;
        for (int i = 0; i < l; ++i)
        {
            if(s.substr(i,26)==t && flag!=2) {
                for(int j = 0; j < 26; j++) {
                    if(t[j]!=&#39;?&#39;) cout<<t[j];
                    else {
                        cout<< q.front();
                        q.pop();
                    }
                }
                i+=25;
                flag=2;
            }
            else {
                if(s[i]==&#39;?&#39;) cout<<&#39;A&#39;;
                else cout<<s[i];
            }
        }
    }
    return 0;
}