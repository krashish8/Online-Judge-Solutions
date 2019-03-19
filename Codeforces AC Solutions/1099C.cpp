/*
Problem Name: C - Postcard
Problem ID: 1099C
Problem URL: https://codeforces.com/contest/1099/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47992510
Solution Time: 2019-01-05 20:27:16
Language: GNU C++17
Time consumed: 30 ms
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
const int MOD = 1e9+7;
const int N  = 150005;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s;
    int n;
    cin >> s >> n;
    int l = s.length(), cnt = l;
    string t;
    int flag = 0,f2=0;
    for (int i = 0; i < l; ++i)
    {
        if(s[i]==&#39;*&#39;) flag++;
        if(s[i]==&#39;?&#39;) f2++;
        if(s[i]==&#39;*&#39; || s[i]==&#39;?&#39;) {cnt-=2;}
    }
    dbg2(flag,f2);
    int ans = n-cnt;
    if(cnt>n) return cout << "Impossible",0;
    if(flag==0 && cnt+f2<n) return cout << "Impossible",0;
    if(flag==0) {
        for (int i = 0; i < l; ++i)
        {
            if(s[i]==&#39;?&#39;) {ans--;continue;}
            if(ans!=0) {
                t=t+s[i];
            }
            else {
                if(i==l-1 || s[i+1] != &#39;?&#39;) t=t+s[i];
                else i++;
            }
        }
        cout << t;
    }
    else {
        for (int i = 0; i < l; ++i)
        {
            dbg(t);
            if(s[i]==&#39;*&#39;) continue;
            if(i==l-1) {t=t+s[i]; continue;}
            if(s[i+1]==&#39;*&#39; && flag) {
                
                for(int j = 0; j < n-cnt;j++)
                    t=t+s[i];
                dbg(cnt-n);
                flag=0;
            }
            else if(s[i+1]==&#39;?&#39; || s[i+1]==&#39;*&#39;) i++;
            else t=t+s[i];
        }
        cout << t;
    }
    return 0;
}