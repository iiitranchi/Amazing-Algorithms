#include<bits/stdc++.h>
using namespace std;
int fact(int n);
int res=1;
int main()
{
	int n,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	cin>>n;
	fact(n);
	cout<<res;
    }
	return 0;
}
int fact(int n)
{
	if(n==0)
		res=1;
	else
	res=n*fact(n-1);
	return res;
}