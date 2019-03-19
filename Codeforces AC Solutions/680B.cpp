/*
Problem Name: B - Bear and Finding Criminals
Problem ID: 680B
Problem URL: https://codeforces.com/contest/680/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46578538
Solution Time: 2018-12-04 13:07:35
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
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
    
    int n,k;
    cin >> n >> k;
    k--;
    int s=0;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        s+=a[i];
    }
    int i=k,j=k;
    while(i<n && j>=0) {
        if(a[i]!=a[j]) s--;
        i++;
        j=k-(i-k);
    }
    cout<<s;
    return 0;
}