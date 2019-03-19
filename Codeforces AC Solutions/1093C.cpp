/*
Problem Name: C - Mishka and the Last Exam
Problem ID: 1093C
Problem URL: https://codeforces.com/contest/1093/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47055713
Solution Time: 2018-12-15 18:15:11
Language: GNU C++17
Time consumed: 155 ms
Memory consumed: 1800 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

stack<int> s;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    int a[n/2];
    for (int i = 0; i < n/2; ++i)
    {
        cin>>a[i];
    }
    int j=0,prev=0;
    for (int i = 0; i < n/2; ++i)
    {
        if(i==0) {s.push(a[i]); cout<<j<<" "; continue;}
       
        if(!s.empty() && a[i]-j>s.top()) {
            int t=s.top();
            j=max(prev,a[i]-t);
        }
        s.push(a[i]-j);
        cout<<j<<" ";
        prev=j;
    }
    while(!s.empty()) {cout<<s.top()<<" "; s.pop();}
    return 0;
}