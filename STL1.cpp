#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creating a vector
    vector<int> v;
    vector<int> v1(5, 1);

    // size and capacity
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    v1.push_back(8);

    cout << "Size of v: " << v.size() << endl;
    cout << "capacity of v: " << v.capacity() << endl;

    // update value
    v[1] = 5;

    cout << "Size of v1: " << v1.size() << endl;
    cout << "capacity of v1: " << v1.capacity() << endl;

    return 0;
}