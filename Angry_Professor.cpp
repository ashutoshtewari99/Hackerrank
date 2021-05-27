#include "/Users/mac/stdc++.h"
#include <iostream>
using namespace std;
int main()
{

int n;
cin>>n;
for(int i=0;i<n;i++)
{
  int size,k,count=0;
  cin>>size;
  int arr[size];
  cin>>k;
  for(int j=0;j<size;j++)
  {
      cin>>arr[j];
      if(arr[j]<=0)
      {
          count++;
      }
  }
    if(count<k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
 return 0;
}