#include<bits/stdc++.h>
using namespace std;
bool prime[1000000];
void sieve()
{
	for(int i=2;i<1000000;i++)
		prime[i]=true;
	for(int i=2;i<=1000;i++)
	{
		for(int j=i*i;j<=1000000;j+=i)
			prime[i]=false;
	}
}
int main()
{
	sieve();
	return 0;
}s
