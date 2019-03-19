/*
Problem Name: Highly Divisible Number
Problem Link: https://erdos.sdslabs.co/problems/9
Author: Ashish Kumar (ashishkr23438)
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl '\n'
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 5e5+5;

int divisors(int n) 
{
	int c = 0;
    for (int i=1; i<=sqrt(n); i++) 
    {
        if (n%i == 0) 
        {
            c++;
        } 
    }
    if((int)sqrt(n)*(int)(sqrt(n))!=n) c*=2;
    else c=c*2-1;
    return c;
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    clock_t tStart = clock();
    
    int i = 300;
    while(1) {
    	int c = divisors(i);
    	if(c>300) break;
    	i++;
    }
    cout << i;
    
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    return 0;
}
/*
2162160
Time Taken: 65.1880000000
*/