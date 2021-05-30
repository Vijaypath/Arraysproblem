#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100],n,c0=0,c1=0,c2=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]==0)
	    	c0++;
	    else if(a[i]==1)
	        c1++;
	    else
	       c2++;
	}
	for(int i=0; i<c0; i++)
	{
		a[i]=0;
	}
	for(int i=c0; i<c1+c0; i++)
       {
       	a[i]=1;
	   }
	   for(int i=c0+c1; i<n; i++)
	   {
	   	  a[i]=2;
	   }	
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
