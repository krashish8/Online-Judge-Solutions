/*
Problem Name: A - Team Olympiad
Problem ID: 490A
Problem URL: https://codeforces.com/contest/490/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46508560
Solution Time: 2018-12-02 15:12:10
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 200 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

vector<int> a[3];

int main(){
    //freopen("input.txt", "r", stdin);
    IOS;
    
    int n;
    cin>>n;
    int c[n]={0};
    for (int i = 0; i < n; ++i)
    {
        int b;
        cin>>b;
        b--;
        c[b]++;
        a[b].pb(i+1);
    }
    int ans;
    ans=min(c[0],min(c[1],c[2]));
    cout<<ans<<endl;
    for (int i = 0; i < ans; ++i)
    {
        cout<<a[0][i]<<" "<<a[1][i]<<" "<<a[2][i]<<endl;
    }
}   