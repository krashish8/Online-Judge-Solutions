/*
Problem Name: A - Yaroslav and Permutations
Problem ID: 296A
Problem URL: https://codeforces.com/contest/296/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46551010
Solution Time: 2018-12-03 20:51:07
Language: GNU C++14
Time consumed: 92 ms
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

int a[1005];

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int b;
        cin>>b;
        a[b]++;
    }
    for (int i = 1; i < 1001; ++i)
    {
        if(a[i]>(n+1)/2) return(cout<<"NO",0);
    }
    cout<<"YES";
    return 0;
}