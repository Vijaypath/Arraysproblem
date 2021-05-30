#include <bits/stdc++.h>
using namespace std;

void revers(int a[], int n)
{
  int i=0,j=n-1;
  while (i<j)
  {
    swap(a[i],a[j]);
    j--;
    i++;
  }
  for(int i =0; i<n; i++)
  {
    cout <<a[i]<<" ";
  }
}

int main()
{
    int a[100], n;
    cin >>n;
    for(int i=0; i<n; i++)
    cin >>a[i];
    revers(a,n);
}
