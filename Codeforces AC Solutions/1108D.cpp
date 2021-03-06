/*
Problem Name: D - Diverse Garland
Problem ID: 1108D
Problem URL: https://codeforces.com/contest/1108/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48832632
Solution Time: 2019-01-23 18:37:47
Language: GNU C++14
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
    int c = 0;
    for (int i = 1; i < s.length(); ++i)
    {
        if(s[i]==s[i-1]) {
            c++;
            if(i==s.length()-1 || s[i]==s[i+1]) {
                if(s[i]==&#39;B&#39; || s[i]==&#39;R&#39;) s[i] = &#39;G&#39;;
                else if(s[i]==&#39;G&#39;) s[i] = &#39;R&#39;;
                i++;
            }
            else {
                if(s[i-1]==&#39;B&#39; && s[i+1]==&#39;G&#39;) s[i] = &#39;R&#39;;
                if(s[i-1]==&#39;G&#39; && s[i+1]==&#39;B&#39;) s[i] = &#39;R&#39;;
                if(s[i-1]==&#39;R&#39; && s[i+1]==&#39;G&#39;) s[i] = &#39;B&#39;;
                if(s[i-1]==&#39;G&#39; && s[i+1]==&#39;R&#39;) s[i] = &#39;B&#39;;
                if(s[i-1]==&#39;R&#39; && s[i+1]==&#39;B&#39;) s[i] = &#39;G&#39;;
                if(s[i-1]==&#39;B&#39; && s[i+1]==&#39;R&#39;) s[i] = &#39;G&#39;;
                
            }
        }
    }
    cout << c << endl;
    cout << s;
    return 0;
}