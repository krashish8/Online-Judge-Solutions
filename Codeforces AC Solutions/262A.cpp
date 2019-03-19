/*
Problem Name: A - Roma and Lucky Numbers
Problem ID: 262A
Problem URL: https://codeforces.com/contest/262/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46857278
Solution Time: 2018-12-10 18:38:47
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n,k,c=0,ans=0;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        string s = to_string(a);
        c=0;
        rep(j,0,s.length()) {
            if((s[j]-&#39;0&#39;)==4 || (s[j]-&#39;0&#39;)==7) c++;
        }
        if(c<=k) ans++;
    }
    cout<<ans;
    return 0;
}