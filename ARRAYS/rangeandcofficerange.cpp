#include<bits/stdc++.h>
using namespace std;
int rangeandcoficentrange(float a[], int n)
{
	float mx=a[0],mn=a[0];
	for(int i=0; i<n; i++)
	{
		if(mn>a[i])
		  mn=a[i];
		  
		else if(mx<a[i])
		mx=a[i];
	}
	float range=mx-mn;
	float cofficrange=(mx-mn)/(mx+mn);
	cout<<range<<" "<<cofficrange;
}
int main()
{
	float a[100],n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	rangeandcoficentrange(a, n);
}
