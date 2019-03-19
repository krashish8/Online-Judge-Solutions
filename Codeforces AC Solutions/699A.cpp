/*
Problem Name: A - Launch of Collider
Problem ID: 699A
Problem URL: https://codeforces.com/contest/699/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46549962
Solution Time: 2018-12-03 20:12:43
Language: GNU C++14
Time consumed: 78 ms
Memory consumed: 1300 KB
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



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    string s;
    int a[n];
    cin>>s;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int f1=0,f2=0,f3=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(i<s.length()-1 && s[i]==&#39;R&#39;&&s[i+1]==&#39;L&#39;) f1=1;
        if(s[i]==&#39;R&#39;) f2=1;
        if(s[i]==&#39;L&#39;) f3=1;
    }
    if(f1==0 || f2==0 || f3==0) return(cout<<-1,0);
    int exp=1000000005;
    for (int i = 0; i < s.length()-1; ++i)
    {
        if(s[i]==&#39;R&#39;&&s[i+1]==&#39;L&#39;) {
            exp=min(exp,(a[i+1]-a[i])/2);
        }
    }
    cout<<exp;
    return 0;
}