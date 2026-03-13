#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vnew;
    vnew.push_back(42);
    vnew.push_back(31);
    vnew.push_back(25);
    vnew.push_back(13);
    vnew.push_back(51);

    vnew.clear(); // removes all elements 
   cout<<"Size of vnew:"<<vnew.size()<<endl;
   cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    return 0;
}