#include<bits/stdc++.h>
using namespace std;
void merge(int a[1000],int n);
int main()
{
	int n,i,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
    merge(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
	return 0;
}
void merge(int a[1000],int n)
{
	if(n>1)
		{
		int nl=n/2;
		int nr=n-(n/2);
		int l[nl],r[nr],i;
		for(i=0;i<n;i++)
		{
			if(i<nl)
			l[i]=a[i];
	    	else
	    	r[i-nl]=a[i];
		}
		merge(l,nl);
		merge(r,nr);
		i=0;
		int j=0;
		int k=0;
		while(j<nl && k<nr)
		{
			if(l[j]<=r[k])
			{
				a[i]=l[j];
				j++;
			}
			else
			{
				a[i]=r[k];
				k++;
			}
		    i++;
		}
		while(j<nl)
		{
			a[i]=l[j];
			i++;
			j++;
		}
		while(k<nr)
		{
			a[i]=r[k];
			i++;
			k++;
		}
	}
}