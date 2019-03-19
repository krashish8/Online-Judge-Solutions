/*
Problem Name: A - Greg's Workout
Problem ID: 255A
Problem URL: https://codeforces.com/contest/255/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46853750
Solution Time: 2018-12-10 16:37:54
Language: GNU C++17
Time consumed: 62 ms
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
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    for (int i = 1; i <= n; ++i)
    {
        int d;
        cin>>d;
        if((i-1)%3==0) a+=d;
        else if((i-2)%3==0) b+=d;
        else c+=d;
    }
    if(a>b && a>c) cout<<"chest";
    else if(b>a && b>c) cout<<"biceps";
    else cout<<"back";
    return 0;
}