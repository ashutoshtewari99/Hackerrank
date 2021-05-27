#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);
   for(int i=0;i<vect.size();i++)
    {
      cout<<vect[i]<<endl;;
    }
    vector<int>::iterator it=vect.begin();
    vect.insert(it+3,35);
    for(int i=0;i<vect.size();i++)
    {
      cout<<vect[i]<<endl;;
    }
    return 0;
}
