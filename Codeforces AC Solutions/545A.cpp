/*
Problem Name: A - Toy Cars
Problem ID: 545A
Problem URL: https://codeforces.com/contest/545/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47454611
Solution Time: 2018-12-24 14:48:35
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,c=0,m;
    cin>>n;
    m=n;
    int j=1;
    vector<int> v;
    while(n--) {
        int flag=0;
        int a;
        for (int i = 0; i < m; ++i)
        {
            cin>>a;
            if(a==1 || a==3) flag=1;
        }
        if(flag==0) {c++; v.pb(j);}
        j++;
    }
    cout<<c<<endl;
    for(auto it:v) {
        cout<<it<<" ";
    }
    return 0;
}