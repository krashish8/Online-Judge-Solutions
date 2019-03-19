/*
Problem Name: A - Presents
Problem ID: 136A
Problem URL: https://codeforces.com/contest/136/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46516590
Solution Time: 2018-12-02 19:44:36
Language: GNU C++14
Time consumed: 62 ms
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

vector<pair<int,int>> v;

int main(){
 //   freopen("input.txt", "r", stdin);
    IOS;
    
    int n;
    cin>>n;
    
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        v.pb({a,i+1});
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it.second<<" ";
    }

}