#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
  int tmp=*x;
  *x=*y;
  *y=tmp;
}
void selctionsort(int a[], int n)
{
  int i,j,minidx;
  for(int i=0;i<n-1;i++)
  {
    minidx=i;
    
    for(int j=i+1; j<n; j++)
    if(a[j]<a[minidx])
      minidx=j;
    
    swap(&a[minidx], &a[i]);
    }
    }
   void printarr(int a[], int n)
   {
  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }
  }
int main()
{
    int a[100], n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      cin >>a[i];
    }
    selctionsort(a,n);
    printarr (a,n);
    
}
