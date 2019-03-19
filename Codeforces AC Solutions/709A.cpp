/*
Problem Name: A - Juicer
Problem ID: 709A
Problem URL: https://codeforces.com/contest/709/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46453877
Solution Time: 2018-12-01 20:09:44
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 0 KB
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



int main(){
   // freopen("input.txt", "r", stdin);
    IOS;
    
    int n,b,d,c=0,s=0;
    cin>>n>>b>>d;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        if(a>b) continue;
        s+=a;
        if(s>d) {
            s=0;
            c++;
        }

    }
    if(s>d) c++;
    cout<<c;
}