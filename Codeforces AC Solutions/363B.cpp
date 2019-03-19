/*
Problem Name: B - Fence
Problem ID: 363B
Problem URL: https://codeforces.com/contest/363/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46622693
Solution Time: 2018-12-04 21:50:55
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 1200 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
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



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int s=0,pos=1;
    for (int i = 0; i < k; ++i)
    {
        s+=a[i];
    }
    int sum=s;
    for (int i = 1; i < n-k+1; ++i)
    {
        sum=sum-a[i-1]+a[i+k-1];

        if(sum<s) {s=sum; pos=i+1;}
    }
    cout<<pos;
    return 0;
}