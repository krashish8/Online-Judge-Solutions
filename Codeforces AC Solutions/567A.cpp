/*
Problem Name: A - Lineland Mail
Problem ID: 567A
Problem URL: https://codeforces.com/contest/567/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46516753
Solution Time: 2018-12-02 19:52:23
Language: GNU C++14
Time consumed: 77 ms
Memory consumed: 400 KB
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
    
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
    for (int i = 1; i < n-1; ++i)
    {   
        cout<<min(a[i]-a[i-1],a[i+1]-a[i]);
        cout<<" "<<max(a[i]-a[0],a[n-1]-a[i])<<endl; 
    }

    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
}