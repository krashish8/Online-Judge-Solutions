/*
Problem Name: A - Young Physicist
Problem ID: 69A
Problem URL: https://codeforces.com/contest/69/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46531255
Solution Time: 2018-12-03 08:38:01
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
    int s1=0,s2=0,s3=0;
    for (int i = 0; i < n; ++i)
    {
        int a,b,c;
        cin>>a>>b>>c;
        s1+=a,s2+=b,s3+=c;

    }
    if(!s1 && !s2 && !s3) cout<<"YES";
    else cout<<"NO";
}