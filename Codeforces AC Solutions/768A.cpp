/*
Problem Name: A - Oath of the Night's Watch
Problem ID: 768A
Problem URL: https://codeforces.com/contest/768/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46517537
Solution Time: 2018-12-02 20:27:40
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 400 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define pb push_back
#define mp make_pair
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
    int mn=1000000005,mx=-mn;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    int c1=0,c2=0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==mn) c1++;
        else if(a[i]==mx) c2++;
    }
    cout<<n-c1-c2;
    
}