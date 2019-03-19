/*
Problem Name: A - Valera and Antique Items
Problem ID: 441A
Problem URL: https://codeforces.com/contest/441/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46827170
Solution Time: 2018-12-09 22:14:17
Language: GNU C++17
Time consumed: 30 ms
Memory consumed: 200 KB
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
    
    int n,v;
    cin>>n>>v;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin>>k;
        int mn = 1000005;
        while(k--) {
            int a;
            cin>>a;
            mn=min(mn,a);
        }
        if(mn<v) s.insert(i+1);
    }
    cout<<s.size()<<endl;
    for(auto it:s) {
        cout<<it<< " ";
    }
    return 0;
}