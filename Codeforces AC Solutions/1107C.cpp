/*
Problem Name: C - Brutality
Problem ID: 1107C
Problem URL: https://codeforces.com/contest/1107/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49009388
Solution Time: 2019-01-26 19:26:06
Language: GNU C++17
Time consumed: 108 ms
Memory consumed: 6900 KB
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

    int n, k;
    cin >> n >> k;
    vector<pii> v;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        v.pb({a,i});
    }
    string s;
    cin >> s;
    int prev = 0;
    for (int i = 1; i < n; ++i)
    {
        if(s[i]!=s[i-1]) {
            sort(v.begin()+prev,v.begin()+i,greater<pii>());
            prev = i;
        }
    }
    sort(v.begin()+prev,v.end(),greater<pii>());
    int c = 0, sum = 0,flag=0;
    vector<int> vv;
    for (int i = 0; i < n; ++i)
    {
        if(vv.size()>=k || (i!=0 && s[i]!=s[i-1])) {
            for(auto it:vv)
                sum+=it;
            flag=1;
            vv.clear();
        }

        if(s[i]!=s[i-1])
            flag=0;
        if(flag==0)
        {
            vv.pb(v[i].fi);
        }

        
    }
    for(auto it:vv)
        sum+=it;
    cout << sum;
    return 0;
}