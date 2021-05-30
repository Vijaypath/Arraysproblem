#include<bits/stdc++.h>
using namespace std;
void movenegoneside(int a[], int n)
{
	int j=0;
	for(int i=0; i<n; i++)
	{
		//while(i<j)
		if(a[i]<0)
		{
		  if(i!=j)
		   swap(a[i],a[j]);
		j++;
	}
	}
}
	void printarr(int a[],int n)
	{
	for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    }
int main()
{
   int a[100],n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	movenegoneside(a, n);
	printarr(a, n);
}

