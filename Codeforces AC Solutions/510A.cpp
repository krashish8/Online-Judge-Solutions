/*
Problem Name: A - Fox And Snake
Problem ID: 510A
Problem URL: https://codeforces.com/contest/510/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46851615
Solution Time: 2018-12-10 15:35:20
Language: GNU C++17
Time consumed: 30 ms
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
    
    int n,m; cin>>n>>m;
    for (int i = 1; i <= n; ++i)
    {
        if(i%4==0) {
            cout<<"#";
            for (int i = 0; i < m-1; ++i)
            {
                cout<<".";
            }
        }
        else if(i%4!=0 && i%2==0) {
            for (int i = 0; i < m-1; ++i)
            {
                cout<<".";
            }
            cout<<"#";
        }
        else for (int i = 0; i < m; ++i)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}