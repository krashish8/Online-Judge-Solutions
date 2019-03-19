/*
Problem Name: A - Choosing Teams
Problem ID: 432A
Problem URL: https://codeforces.com/contest/432/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46825736
Solution Time: 2018-12-09 21:13:51
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
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        a[i]=5-a[i];
    }
    sort(a,a+n,greater<int>());
    int c=0;
    for (int i = 2; i < n; i+=3)
    {
        if(a[i]>=k) c++;
        else break;
    }
    cout<<c;
    return 0;
}