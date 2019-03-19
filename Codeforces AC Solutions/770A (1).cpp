/*
Problem Name: A - New Password
Problem ID: 770A
Problem URL: https://codeforces.com/contest/770/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46509343
Solution Time: 2018-12-02 15:34:27
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
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



int main(){
   // freopen("input.txt", "r", stdin);
    IOS;
    
    int n,k;
    cin>>n>>k;
    int k1=k;
    char c=&#39;a&#39;;
    for (int i = 0; i < n; ++i)
    {
        cout<<c++;
        k--;
        if(k==0) {
            c=&#39;a&#39;;
            k=k1;
        }
    }
}   