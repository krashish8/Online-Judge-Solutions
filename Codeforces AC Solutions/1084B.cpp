/*
Problem Name: B - Kvass and the Fair Nut
Problem ID: 1084B
Problem URL: https://codeforces.com/contest/1084/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46880740
Solution Time: 2018-12-10 22:26:26
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
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n,s;
    cin>>n>>s;
    int a[n];
    int sum=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<s) return(cout<<-1,0);
    sort(a,a+n);
    if((sum-s)/n<=a[0])
        cout<<(sum-s)/n;
    else cout<<a[0];
    return 0;
}