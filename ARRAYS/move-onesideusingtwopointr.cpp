#include<bits/stdc++.h>
using namespace std;
void movenegoneside(int a[], int n)
{ 
int i=0,j=n-1;
for(int i=0; i<n; i++)
{
	while(i<j)
	{
		if(a[i]<0 && a[j]<0)
		  i++;
		  else if(a[i]>0 && a[j]<0)
		  {
		  	swap(a[i], a[j]);
		  	i++;
		  	j--;
		  }
		  else 
		    i++;
	}
}
}
void printarr(int a[],int n){
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
