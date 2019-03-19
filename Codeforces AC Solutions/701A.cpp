/*
Problem Name: A - Cards
Problem ID: 701A
Problem URL: https://codeforces.com/contest/701/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46913586
Solution Time: 2018-12-11 21:31:15
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

vector<pii> v;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        v.pb({a,i+1});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n/2; ++i)
    {
        cout<<v[i].se<<" "<<v[n-i-1].se<<endl;
    }
    return 0;
}