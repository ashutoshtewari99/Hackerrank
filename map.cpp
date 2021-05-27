#include <iostream>
#include <map>
using namespace std;
int main()
{
    cout << "\n-------------------------------------\n";

    map<int, string> customer;
    customer[100]="Palash";
    customer[88]="Mayank";
    customer[120]="Aman";
    customer[200]="Pankaj";

    customer.insert(pair<int,string>(98,"Bhaukali"));
    
    // map<int, string> c
    // {
    //     {100,"Palash"},{88,"Mayank"},{120,"Aman"}
    // };

    map<int,string>::iterator p=customer.begin();

    while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
    cout<<endl<<customer.at(100)<<endl;
    
    
    cout<<endl<<customer.size();
    
    
    cout << "\n-------------------------------------\n";
    return 0;
}