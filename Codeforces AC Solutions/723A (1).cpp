/*
Problem Name: A - The New Year: Meeting Friends
Problem ID: 723A
Problem URL: https://codeforces.com/contest/723/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46853249
Solution Time: 2018-12-10 16:23:32
Language: GNU C++17
Time consumed: 31 ms
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
    
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 3000;
    for (int i = min({a,b,c}); i <= max({a,b,c}); ++i)
    {
        ans= min(ans,abs(a-i)+abs(b-i)+abs(c-i));
    }
    cout<<ans;
    return 0;
}