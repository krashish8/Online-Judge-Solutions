/*
Problem Name: B - Vanya and Lanterns
Problem ID: 492B
Problem URL: https://codeforces.com/contest/492/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46585334
Solution Time: 2018-12-04 15:59:56
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;

vector<int> v;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,l;
    cin>>n>>l;
    int mx=0;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 1; i < n; ++i)
    {
        mx=max(a[i]-a[i-1],mx);
    }
    mx=max(mx,2*(a[0]-0));
    mx=max(mx,2*(l-a[n-1]));
    cout<<fixed<<setprecision(10)<<(double)mx/2;
    return 0;
}