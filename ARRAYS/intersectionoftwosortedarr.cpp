#include<bits/stdc++.h>
using namespace std;
void intersecunionoftwosortedarr(int a[], int b[], int m, int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		   //cout<<a[i++]<<" ";
		i++;
	else if(a[i]>b[j])
	   //cout<<b[j++]<<" ";
	   j++;
	else
	{
	cout<<a[i++]<<" ";
     j++;
	}   
}
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
intersecunionoftwosortedarr(a, b, m, n);
}
