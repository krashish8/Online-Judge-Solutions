/*
Problem Name: A - Team Olympiad
Problem ID: 490A
Problem URL: https://codeforces.com/contest/490/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46508028
Solution Time: 2018-12-02 14:58:28
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 100 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int a[5005],b[5005],c[5005];

int main(){
    //freopen("input.txt", "r", stdin);
    IOS;
    
    int n;
    cin>>n;
    int a1=0,b1=0,c1=0;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin>>m;
        if(m==1) a[a1]=i+1,a1++;
        else if(m==2) b[b1]=i+1,b1++;
        else if(m==3) c[c1]=i+1,c1++;
    }
    int ans=min(a1,min(b1,c1));
    cout<<ans<<endl;
    for (int i = 0; i < ans; ++i)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
}   