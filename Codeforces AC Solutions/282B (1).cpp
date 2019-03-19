/*
Problem Name: B - Painting Eggs
Problem ID: 282B
Problem URL: https://codeforces.com/contest/282/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46660656
Solution Time: 2018-12-05 22:05:02
Language: GNU C++14
Time consumed: 872 ms
Memory consumed: 2900 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
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
    int s1=0,s2=0;
    string s="";
    for (int i = 0; i < n; ++i)
    {
        int a,b;
        cin>>a>>b;
        if(abs(s1+a-s2) <= 500) {
            s1+=a;
            s+=&#39;A&#39;;
        }
        else if(abs(s2+b-s1) <= 500 ) {
            s2+=b;
            s+=&#39;G&#39;;
        }
        else return(cout<<-1,0);
    }
    cout<<s;
    return 0;
}