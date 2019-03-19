/*
Problem Name: C - Ehab and a 2-operation task
Problem ID: 1088C
Problem URL: https://codeforces.com/contest/1088/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46615580
Solution Time: 2018-12-04 19:16:18
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
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
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    reverse(a,a+n);
    cout<<n+1<<endl;
    int b[n];
    for (int i = 0; i < n; ++i)
    {
        b[i]=((a[i]/(n+1))+i+2)*(n+1)-(i+1)-a[i];
        if(i==0)
            cout<<1<<" "<<n-i<<" "<<b[i]<<endl;
        else
            cout<<1<<" "<<n-i<<" "<<b[i]-b[i-1]<<endl;
    }

    cout<<2<<" "<<n<<" "<<n+1;
    return 0;
}