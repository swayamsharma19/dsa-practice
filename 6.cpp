#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(22);
    arr.push_back(21);
    arr.push_back(24);
    cout << arr.front() << endl; // returns  first element
    cout << arr.back() << endl;  // returns last element

    vector<int>a;
    // copy value of 1 vector to another 
    a=arr;
    cout<<"Size of a:"<<a.size()<<endl;
    return 0;
}