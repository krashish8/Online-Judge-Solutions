/*
Problem Name: A - DZY Loves Hash
Problem ID: 447A
Problem URL: https://codeforces.com/contest/447/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47523499
Solution Time: 2018-12-26 17:27:05
Language: GNU C++17
Time consumed: 15 ms
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
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

int arr[305];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int p,n;
    cin >> p >> n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if(arr[a%p]==0)
            arr[a%p]=1;
        else
            return cout<<(i+1),0;
    }
    cout<<-1;

    return 0;
}