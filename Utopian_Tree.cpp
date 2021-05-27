#include "/Users/mac/stdc++.h"
#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        int height = 1;
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
                height *= 2;
            else
                height++;
        }

        cout << height << endl;
    }

    return 0;
}
