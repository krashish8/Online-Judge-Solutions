/*
Problem Name: A - Shaass and Oskols
Problem ID: 294A
Problem URL: https://codeforces.com/contest/294/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46453708
Solution Time: 2018-12-01 20:02:37
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
   // freopen("input.txt", "r", stdin);
    IOS;
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
       cin>>a[i];
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; ++i)
    {
        int x,y;
        cin>>x>>y;
        x--;
        if(x>=1)
        a[x-1]+=y-1;
        if(x+1<n)
            a[x+1]+=a[x]-y;
        a[x]=0;
    }
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<endl;
    }
}