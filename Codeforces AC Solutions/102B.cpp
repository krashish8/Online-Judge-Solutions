/*
Problem Name: B - Sum of Digits
Problem ID: 102B
Problem URL: https://codeforces.com/contest/102/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46580283
Solution Time: 2018-12-04 13:56:28
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 300 KB
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

vector<pair<int,int>> v;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string s;int n;
    cin>>s;
    int c=0;
    while(s.length()!=1) {
        int sum=0;
        for (int i = 0; i < s.length(); ++i)
        {
            sum+=s[i]-&#39;0&#39;;
        }
        s=to_string(sum);
        c++;
    }
    cout<<c;
    return 0;
}