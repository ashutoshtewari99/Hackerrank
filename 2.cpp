#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int k, cl = 0;
    cin >> k;
    while (cl < s.size() && cl < t.size())
    {
        if (s[cl] != t[cl])
        {
            break;
        }
        cl++;
    }
    if (s.size() - cl + t.size() - cl <= k && (s.size() - cl + t.size() - cl) % 2 == k % 2)
    {
        cout << "Yes"<<endl;
    }
    else if (s.size() + t.size() <= k)
    {
        cout << "Yes"<<endl;
    }
    else
    {
        cout << "No";
    }
    return 0;
}