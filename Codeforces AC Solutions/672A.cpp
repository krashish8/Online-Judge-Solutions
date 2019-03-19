/*
Problem Name: A - Summer Camp
Problem ID: 672A
Problem URL: https://codeforces.com/contest/672/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46940672
Solution Time: 2018-12-12 19:24:17
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
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin>>n;
    n--;
    string s;
    for (int i = 1; i < 900; ++i)
    {
        int j=i;
        string t = "";
        while(j!=0) {
            int d=j%10;
            j/=10;
            t=(char)(&#39;0&#39;+d)+t;
        }
        s+=t;
    }
    cout<<s[n];
    return 0;
}