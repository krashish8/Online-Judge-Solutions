/*
Problem Name: A - Minimum Difficulty
Problem ID: 496A
Problem URL: https://codeforces.com/contest/496/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46841567
Solution Time: 2018-12-10 11:02:18
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
    for (int i = 0; i < n-1; ++i)
    {
        a[i]=a[i+1]-a[i];
    }
    int mx=0,mn=200000005;
    for (int i = 0; i < n-1; ++i)
    {
        mx=0;
        rep(j,0,n-1) {
            int sum=0;
            if(j==i) {
                sum+=a[j];
                j++;
                sum+=a[j];
            }
            else
                sum+=a[j];
            mx=max(mx,sum);
        }
        mn=min(mx,mn);
    }
    cout<<mn;
    return 0;
}