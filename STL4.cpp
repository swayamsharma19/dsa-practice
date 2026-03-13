#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vnew;
    vnew.push_back(42);
    vnew.push_back(31);
    vnew.push_back(25);
    vnew.push_back(13);
    vnew.push_back(51);

    vnew.insert(vnew.begin() + 1, 50); // inserting at start

    vnew[2]=37; // updating value 
     for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }
    return 0;
}