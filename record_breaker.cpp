#include "/Users/mac/stdc++.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "\n-------------------------------------\n";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    
    int mx=-1,count=0;
    for(int i=0;i<n;i++)
    {
      if(mx<arr[i] && arr[i]>arr[i+1])
      {
          count++;
          mx=max(mx,arr[i]);
      }
    }
    
    cout<<"Record breaking days are: "<<count<<endl;

    cout << "\n-------------------------------------\n";
    return 0;
}