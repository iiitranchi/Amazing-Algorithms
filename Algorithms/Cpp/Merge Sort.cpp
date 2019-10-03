#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int,int,int);
void mergesort(int a[],int,int);
int main()
{
	int arr[10],i,n;
	cout<<"Enter the number of elements in the array :";
	cin>>n;
	cout<<"Enter the elements of the array ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	mergesort(arr,0,n-1);
	cout<<"The sorted array is :";
	for(i=0;i<n;i++)
		cout<<arr[i];
}
void merge(int arr[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,index=beg,temp[10],k;
	while((i<=mid) && (j<=end))
	{
		if(arr[i]<arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else
		{
			temp[index]=arr[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=arr[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=arr[i];
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++)
		arr[k]=temp[k];
}
void mergesort(int arr[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergesort(arr,beg,mid);
		mergesort(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}