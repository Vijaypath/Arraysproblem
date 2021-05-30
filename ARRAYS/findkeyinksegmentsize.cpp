#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
bool findkey(int a[],int n, int k, int x)
{
  int i;
  for(int i=0; i<n; i=i+k)
  {
    int j;
    for( j=0; j<k; j++)
    if(a[i+j]==x)
       break;
        
       if(j==k)
         return false;
  }
  if(i==n)
    return true;
  int j;
  for(int j=i-k; j<n; j++)
    if(a[j]==x)
      break;
     
     if(j==n)
       return false;
     
   return true;
  
}

int main()
{
    int a[100], n, x, k;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    cin>>k>>x;
    if(findkey(a,n,k,x))
       cout<<"YES";
    else 
        cout<<"NO";
        
     return 0;
    }
