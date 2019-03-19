/*
Problem Name: B - Substrings Sort
Problem ID: 988B
Problem URL: https://codeforces.com/contest/988/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38849104
Solution Time: 2018-06-01 18:37:38
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3500 KB
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].length()>s[j].length())
			{
				string temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((s[i].length()==s[j].length()))
			{
				if(!(s[i]==s[j]))
				{
					cout<<"NO";
					return 0;
				}
			}
		}
	}
	int flag=0,w=0,v=1;
	for(int i=0;i<n-1;i++)
	{
		a:
		string temp;
		if(w!=s[i+1].length())
		{
			temp=s[i+1].substr(w,v);
			
		}
		else
		{
			cout<<"NO";
			return 0;
		}

		if(temp==s[i])
		{
			flag++;
			w=0;v=1;
			continue;
		}
		else if(v<s[i+1].length())
		{
			v++;
			goto a;
		}
		else
		{
			w++;
			v=w+1;
			goto a;
		}
	}
	if(flag==n-1)
	{
		cout<<"YES\n";
		for(int i=0;i<n;i++)
			cout<<s[i]<<endl;

	}
	else
		cout<<"NO";
	return 0;
}