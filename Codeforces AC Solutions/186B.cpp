/*
Problem Name: B - Growing Mushrooms
Problem ID: 186B
Problem URL: https://codeforces.com/contest/186/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46769170
Solution Time: 2018-12-08 18:57:37
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 100 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


vector<pair<double,int>> v;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        double t = max (a*t1 - a*t1*(double)k/100+b*t2 , b*t1 - b*t1*(double)k/100+a*t2);
        v.pb({-t,i+1});
    }
    sort(v.begin(),v.end());
    for(auto it : v) {
        cout << it.se << " " << fixed << setprecision(2) << -it.fi <<endl;
    }
    return 0;
}