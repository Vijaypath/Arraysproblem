#include<bits/stdc++.h>
using namespace std;
void unionoftwosortedarr(int a[], int b[], int m, int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		   cout<<a[i++]<<" ";
		
	else if(a[i]>b[j])
	   cout<<b[j++]<<" ";
	   
	else
	{
		cout<<a[i++]<<" ";
		j++;
	   }   
}
while(i<m)
cout<<a[i++]<<" ";
while(j<n)
cout<<b[j++]<<" ";
}

int main()
{
	int a[100],b[100],m,n;
	cin>>m>>n;
	for(int i=0; i<m; i++)
	{
		cin>>a[i];
	}
	for(int j=0; j<n; j++)
	{
		cin>>b[j];
	}	
	unionoftwosortedarr(a, b, m, n);
}
