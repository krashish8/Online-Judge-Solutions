/*
Problem Name: D - Balanced Ternary String
Problem ID: 1102D
Problem URL: https://codeforces.com/contest/1102/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48144738
Solution Time: 2019-01-09 19:00:32
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 1300 KB
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

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    string s;
    cin >> n >> s;
    int c[3]={0};
    for (int i = 0; i < n; ++i)
    {
        c[s[i]-&#39;0&#39;]++;
    }
    here:
    if(c[0]==c[1] && c[1]==c[2])
        return cout << s,0;
    if(c[0]==n/3)
    {
        if(c[2]>c[1])
        for (int i = 0; i < n; ++i)
        {
            
            {
                if(s[i]==&#39;2&#39; && c[2]!=n/3) {
                    s[i]=&#39;1&#39;;
                    c[2]--;
                }
                if(c[2]==n/3) {
                    return cout << s,0;
                }
            }                
        }
        else
        for (int i = n-1; i >= 0; --i)
        {
            {
                if(s[i]==&#39;1&#39; && c[1]!=n/3) {
                    s[i]=&#39;2&#39;;
                    c[1]--;
                }
                if(c[1]==n/3) {
                    return cout << s,0;
                }
            }                
        }
    }
    if(c[1]==n/3)
    {
        if(c[2]>c[0])
        for (int i = 0; i < n; ++i)
        {
            
            {
                if(s[i]==&#39;2&#39; && c[2]!=n/3) {
                    s[i]=&#39;0&#39;;
                    c[2]--;
                }
                if(c[2]==n/3) {
                    return cout << s,0;
                }
            }                
        }
        else
        for (int i = n-1; i >= 0; --i)
        {
            {
                if(s[i]==&#39;0&#39; && c[0]!=n/3) {
                    s[i]=&#39;2&#39;;
                    c[0]--;
                }
                if(c[0]==n/3) {
                    return cout << s,0;
                }
            }                
        }
    }
    if(c[2]==n/3)
    {
        if(c[1]>c[0])
        for (int i = 0; i < n; ++i)
        {
            
            {
                if(s[i]==&#39;1&#39; && c[1]!=n/3) {
                    s[i]=&#39;0&#39;;
                    c[1]--;
                }
                if(c[1]==n/3) {
                    return cout << s,0;
                }
            }                
        }
        else
        for (int i = n-1; i >= 0; --i)
        {
            {
                if(s[i]==&#39;0&#39; && c[1]!=n/3) {
                    s[i]=&#39;1&#39;;
                    c[0]--;
                }
                if(c[0]==n/3) {
                    return cout << s,0;
                }
            }                
        }
    }
    if(c[0]<n/3) {
        int mx;
        if(c[1]>n/3) mx=1;
        else mx=2;
        for (int i = 0; i < n; ++i)
        {
            if(s[i]==(char)(mx+&#39;0&#39;)) {
                s[i]=&#39;0&#39;;
                c[0]++;
                c[mx]--;
            }
            if(c[s[i]-&#39;0&#39;]==n/3 || c[0]==n/3 || c[1]==n/3 || c[2]==n/3) goto here;

        }
    }
    else if(c[0]>n/3){
        int mn;
        if(c[2]<n/3) mn = 2;
        else mn=1;
        dbg(mn); 
        for (int i = n-1; i >=0 ;i--) {
            if(s[i]==&#39;0&#39; && c[0]!=n/3) {
                s[i]=(char)(mn+&#39;0&#39;);
                c[mn]++;
                c[0]--;
            }
            if(c[s[i]-&#39;0&#39;]==n/3 || c[0]==n/3 || c[1]==n/3 || c[2]==n/3) goto here;

        }
    }
    

    return 0;
}