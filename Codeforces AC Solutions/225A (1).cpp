/*
Problem Name: A - Dice Tower
Problem ID: 225A
Problem URL: https://codeforces.com/contest/225/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46540840
Solution Time: 2018-12-03 14:53:36
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
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
    int t;
    cin>>t;
    for (int i = 0; i < n; ++i)
    {
        int a,b;
        cin>>a>>b;
        int d[7]={0};
        d[a]=1;
        d[7-a]=1,d[b]=1,d[7-b]=1;
        d[t]=1;
        int cn=0;
        rep(j,1,7) {
            if(d[j]==0) {
                t=7-j;
                cn++;
            }
        }
        if(cn==2) return(cout<<"NO",0);
    }
    cout<<"YES";
    return 0;
}