/*
Problem Name: B - Ehab and subtraction
Problem ID: 1088B
Problem URL: https://codeforces.com/contest/1088/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46596377
Solution Time: 2018-12-04 17:50:28
Language: GNU C++14
Time consumed: 78 ms
Memory consumed: 800 KB
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
    sort(a,a+n);
    int c=0;
    for (int i = 0; i < n; ++i)
    {
        if(i==0 && c<k) {cout<<a[0]<<endl; c++;}
        else if(i>0 && c<k)
        {
            while(i<n && a[i]-a[i-1]==0) i++;
            if(i<n)
            {
                cout<<a[i]-a[i-1]<<endl;
                c++;
            }
        }
    }
    while(c<k) {
        cout<<0<<endl;
        c++;
    }
    return 0;
}