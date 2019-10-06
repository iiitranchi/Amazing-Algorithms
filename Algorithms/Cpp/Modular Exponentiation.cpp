#include<bits/stdc++.h>
using namespace std;
int power(int x,int y,int p) 
{ 
	int res = 1;
	x = x % p;
	while (y > 0) 
	{ 
		// If y is odd, multiply x with result 
		if (y%2==1) 
			res = (res*x) % p; 

		// y must be even now 
		y = y/2; 
		x = (x*x) % p; 
	} 
	return res; 
}
int main() 
{ 
	int x,y;
	cin>>x>>y>>m;
	//to print value of x raise to power y modulo m; 
	cout<<power(x, y, p); 
	return 0; 
} 

