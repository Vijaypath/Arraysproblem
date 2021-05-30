#include <iostream>
using namespace std;

void minmax(int a[], int n)
{
  int mn=a[0];
  int mx=a[0];
  for(int i=0; i<n; i++)
  {
    if(mn>a[i])
    mn=a[i];
    
    else if(mx<a[i])
      mx=a[i];
  }
  
  cout<<mn<<" "<<mx;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    minmax(a, n);
}
