/*
Problem Name: C - Powers Of Two
Problem ID: 1095C
Problem URL: https://codeforces.com/contest/1095/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47596513
Solution Time: 2018-12-27 21:50:11
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 3100 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const int MOD = 1073741824;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int N  = 1e6+5;
 
 priority_queue<int> v;
 vector<int> vt;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,k;
    cin >> n >> k;
    if(n<k) return cout<<"NO",0;
    int m = n;
    while(m>0) {
        vt.pb(m%2);
        m/=2;
    }
    for (int i = 0; i < vt.size(); ++i)
    {
        if(vt[i]==1) {v.push(i); k--;}
    }
    if(k<0) return cout<<"NO",0;
    while(k!=0) {
        int q=v.top();
        v.pop();
        v.push(q-1);
        v.push(q-1);
        k--;
    }
    cout<<"YES\n";
    while(!v.empty()) {
        cout<<(1<<v.top())<<" ";
        v.pop();
    }

    return 0;
}