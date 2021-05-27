#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<6;j++)
    {
      cout<<arr[j]<<" ";
    }
    return 0;
}
