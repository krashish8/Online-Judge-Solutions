/*
Problem Name: A - Snacktower
Problem ID: 767A
Problem URL: https://codeforces.com/contest/767/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46517170
Solution Time: 2018-12-02 20:11:23
Language: GNU C++14
Time consumed: 61 ms
Memory consumed: 800 KB
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
    int k=n-1;
    int a[n],b[n]={0};
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        b[a[i]-1]=1;
        while(b[k]==1) {
            cout<<k+1<<" ";
            k--;
            if(k==-1) break;
        }
        cout<<endl;
    }
}