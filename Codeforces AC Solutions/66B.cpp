/*
Problem Name: B - Petya and Countryside
Problem ID: 66B
Problem URL: https://codeforces.com/contest/66/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46570837
Solution Time: 2018-12-04 08:36:20
Language: GNU C++14
Time consumed: 62 ms
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
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int c=0,ans=0;
    for (int i = 0; i < n; ++i)
    {
        c=0;
        if(i==0 || a[i]>a[i-1]) {
            rep(j,i+1,n) {
                if(a[j]>a[j-1]) break;
                c++;
            }
            for(int j=i;j>=0;j--) {                
                c++;
                if(j>0 && a[j]<a[j-1]) break;
            }
        }
        ans=max(c,ans);
    }
    if(n!=1)
        cout<<ans;
    else cout<<1;
    return 0;
}