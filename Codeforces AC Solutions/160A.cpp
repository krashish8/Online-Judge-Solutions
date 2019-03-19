/*
Problem Name: A - Twins
Problem ID: 160A
Problem URL: https://codeforces.com/contest/160/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46531609
Solution Time: 2018-12-03 08:59:36
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


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    
    int n;
    cin>>n;
    int a[n],s=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        s+=a[i];
    }
    int s2=0;
    sort(a,a+n,greater<int>());
    int i;
    for (i = 0; i < n; ++i)
    {
        s2+=a[i];
        if(s2>s-s2) break;
    }
    if(i+1!=n)
    cout<<i+1;
    else cout<<n;
    return 0;
}