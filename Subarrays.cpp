#include "/Users/mac/stdc++.h"
using namespace std;
int main()
{
    cout << "\n-------------------------------------\n";
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }
    cout << "\n-------------------------------------\n";
    return 0;
}