/*
Problem Name: B - Jeff and Periods
Problem ID: 352B
Problem URL: https://codeforces.com/contest/352/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47543575
Solution Time: 2018-12-27 11:38:50
Language: GNU C++17
Time consumed: 124 ms
Memory consumed: 1600 KB
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
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

const int N  = 100005;
pii a[N];


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    for (int i = 0; i < N; ++i)
    {
        a[i]={-1,-1};
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int b;
        cin >> b;
        if(a[b].se==-1) {
            a[b]={i,0};
        }
        else if(a[b].se==0){
            a[b]={i,i-a[b].fi};
        }
        else if(a[b].se>0){
            if(i-a[b].fi!=a[b].se) {
                a[b]={-N,-N};
            }
            else {
                a[b].fi=i;
            }
        }
    }
    int cnt=0;
    for (int i = 0; i < N; ++i)
    {
        if(a[i].se>=0) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for (int i = 0; i < N; ++i)
    {
        if(a[i].se>=0) {
            cout<<i<<" "<<a[i].se<<endl;
        }

    }

    return 0;
}