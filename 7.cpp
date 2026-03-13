#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> ans;
    ans.push_back(125);
    ans.push_back(45);
    ans.push_back(59);
    ans.push_back(52);
    ans.push_back(189);

    // sort in increasing order

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " << endl;
    }
    cout<<endl;

    // sort in decreaing order
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " << endl;
    }
    cout<<endl;
    // search in binary search 
    cout<<binary_search(ans.begin(),ans.end(),54)<<endl;
    return 0;
}