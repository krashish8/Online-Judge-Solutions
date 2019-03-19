/*
Problem Name: A - I Wanna Be the Guy
Problem ID: 469A
Problem URL: https://codeforces.com/contest/469/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46534126
Solution Time: 2018-12-03 10:55:41
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 200 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    set<int> s;
    for (int i = 0; i < a; ++i)
    {
        int c;
        cin>>c;
        s.insert(c);
    }
    cin>>b;
    for (int i = 0; i < b; ++i)
    {
        int c;
        cin>>c;
        s.insert(c);
    }
    if(s.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}