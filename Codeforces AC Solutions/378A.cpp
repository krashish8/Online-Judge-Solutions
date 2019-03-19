/*
Problem Name: A - Playing with Dice
Problem ID: 378A
Problem URL: https://codeforces.com/contest/378/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46837285
Solution Time: 2018-12-10 07:15:21
Language: GNU C++17
Time consumed: 15 ms
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int a,b,c=0,d=0,e=0;
    cin>>a>>b;
    rep(i,1,7) {
        if(abs(i-a)>abs(i-b)) c++;
        else if(abs(i-a)==abs(i-b)) d++;
        else e++;
    }
    cout<<e<<" "<<d<<" "<<c;
    return 0;
}