#include<bits/stdc++.h>
using namespace std;
int cntfreq(int a[], int n,int x)
{
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]==x)
		cnt++;
	}
	
	return cnt;
}

int main()
{
	int a[100],n,x;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cin>>x;
	cout<<cntfreq(a, n,x);
}
