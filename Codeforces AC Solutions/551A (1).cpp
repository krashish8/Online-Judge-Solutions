/*
Problem Name: A - GukiZ and Contest
Problem ID: 551A
Problem URL: https://codeforces.com/contest/551/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46941282
Solution Time: 2018-12-12 19:46:30
Language: GNU C++17
Time consumed: 46 ms
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

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        int c=0;
        rep(j,0,n) {
            if(a[j]>a[i]) c++;
        }
        cout<<c+1<<" ";
    }
    return 0;
}