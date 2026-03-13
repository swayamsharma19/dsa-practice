#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Delete value from a vector
    vector<int> vnew;
    vnew.push_back(42);
    vnew.push_back(31);
    vnew.push_back(25);
    vnew.push_back(13);
    vnew.push_back(51);

    vnew.pop_back();
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // removing element from middle
    vnew.erase(vnew.begin()+1); // 31
     cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // printing values 
    for(int i=0;i<vnew.size();i++){
        cout<<vnew[i]<<" ";
    }
    
    return 0;
}