/*
Problem Name: A - Marks
Problem ID: 152A
Problem URL: https://codeforces.com/contest/152/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46722838
Solution Time: 2018-12-07 16:48:16
Language: GNU C++17
Time consumed: 31 ms
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
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m;
    cin>>n>>m;
    char aa[n][m];
    int a[n][m];
    rep(i,0,n) {
        rep(j,0,m) {
            cin>>aa[i][j];
            a[i][j]=aa[i][j]-&#39;0&#39;;
        }
    }
    int mx[m]={0};
    rep(i,0,m) {
        int mm=0;
        rep(j,0,n) {
            mm=max(mm,a[j][i]);
        }
        mx[i]=mm;
    }
    int c=0;
    int suc[n]={0};
    rep(i,0,m) {
        rep(j,0,n) {
            if(a[j][i]==mx[i])
            {
                suc[j]=1;
            }
        }
    }
    rep(i,0,n) {
        if(suc[i]) {c++;}
    }
    cout<<c;
    return 0;
}