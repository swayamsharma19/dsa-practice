#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        if (n == 0)
            return 0;

        int start = 0; // Officer (slow pointer)
        int res = 1;   // Unique elements count
        int end = 1;   // CM Sahab (fast pointer)

        while (end < n)
        {
            if (arr[end] == arr[end - 1])
            {
                end++; // duplicate → skip
            }
            else
            {
                arr[start + 1] = arr[end];
                start++;
                res++;
                end++;
            }
        }

        return res;
    }
};