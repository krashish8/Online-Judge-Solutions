/*
Problem Name: A - Mountain Scenery
Problem ID: 218A
Problem URL: https://codeforces.com/contest/218/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46547803
Solution Time: 2018-12-03 19:09:44
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define inf 2e9+9
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi pair<int,int>
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
    
    int n,k,c=0;
    cin>>n>>k;
    int a[2*n+2];
    for (int i = 1; i <= 2*n+1; ++i)
    {
        cin>>a[i];
    }
    for (int i = 1; i <= 2*n+1; ++i)
    {
        if(i%2==0 && c<k && a[i]-1>a[i-1] && a[i]-1>a[i+1]) cout<<a[i]-1<<" ",c++;
        else cout<<a[i]<<" ";
    }
    return 0;
}