/*
Problem Name: B - Letters Rearranging
Problem ID: 1093B
Problem URL: https://codeforces.com/contest/1093/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47049272
Solution Time: 2018-12-15 17:54:59
Language: GNU C++17
Time consumed: 30 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int l = s.length(), flag=0, ff=0;
        char c = s[0];
        for (int i = 0; i < l; ++i)
        {
            if(s[i]!=s[l-i-1]) flag=1;
            if(s[0]!=s[i]) {
                ff=1;
            }
            
        }
        if(flag==0)
        for (int i = 0; i < l; ++i)
        {
            if(s[0]!=s[i]) {
                swap(s[0],s[i]);
                break;
            }
        }
        if(flag==1) cout<<s;
        else if(ff==0) cout<<-1;
        else cout<<s;
        cout<<endl;
    }
    return 0;
}