#include <iostream>
#include <list>
using namespace std;
int main()
{
    cout<<"\n-------------------------------------\n";
    list<int> l1;
    l1.push_back(40);
    l1.push_back(20);
    l1.push_back(10);
    l1.push_back(30);
    list<int>::iterator p=l1.begin();
    while (p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<"\nTotal values in the list are: "<<l1.size();
    cout<<"\nSorted list is: \n";
    l1.sort();
    p=l1.begin();
    while (p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<"\n-------------------------------------\n";
    return 0;
}

