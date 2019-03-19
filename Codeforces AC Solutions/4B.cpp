/*
Problem Name: B - Before an Exam
Problem ID: 4B
Problem URL: https://codeforces.com/contest/4/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46660073
Solution Time: 2018-12-05 21:41:49
Language: GNU C++14
Time consumed: 15 ms
Memory consumed: 0 KB
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
    
    int d,s;
    cin>>d>>s;
    int a[d],b[d];
    int s1=0,s2=0;
    for (int i = 0; i < d; ++i)
    {
        cin>>a[i]>>b[i];
        s1+=a[i];
        s2+=b[i];
        b[i]=b[i]-a[i];
    }
    if(!(s>=s1 && s<=s2)) return(cout<<"NO",0);
    int sum=s1;
    while(sum!=s) {
        for (int i = 0; i < d; ++i)
        {
            if(b[i]==0) continue;
            a[i]++;
            sum++;
            if(sum==s) goto a;
            b[i]--;
        }
    }
    a: 
    cout<<"YES\n";
    for (int i = 0; i < d; ++i)
    {
        
        cout<<a[i]<<" ";
    }
    return 0;
}