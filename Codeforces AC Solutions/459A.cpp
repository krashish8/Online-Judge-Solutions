/*
Problem Name: A - Pashmak and Garden
Problem ID: 459A
Problem URL: https://codeforces.com/contest/459/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46824961
Solution Time: 2018-12-09 20:42:20
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1!=x2 && y1!=y2) {
        if(abs(x2-x1) != abs(y2-y1)) return(cout<<-1,0);
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;

    }
    else if(x1==x2) cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x1+abs(y2-y1)<<" "<<y2;
    else if(y1==y2) cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y1+abs(x2-x1);
    return 0;
}