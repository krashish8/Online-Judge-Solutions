/*
Problem Name: A - Nearly Lucky Number
Problem ID: 110A
Problem URL: https://codeforces.com/contest/110/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46855739
Solution Time: 2018-12-10 17:43:16
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    
    string s;
    cin>>s;
    int c=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if((s[i]-&#39;0&#39;)==4 || (s[i]-&#39;0&#39;)==7) c++;
    }
    if(c==0) {cout<<"NO";return 0;}
    while(c!=0) {
        int d=c%10;
        c/=10;
        if(d!=7 && d!=4) {cout<<"NO";return 0;}
    }
    cout<<"YES";
    return 0;
}