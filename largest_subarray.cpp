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
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << "\nThe longest subarray length is: " << ans;

    cout << "\n-------------------------------------\n";
    return 0;
}