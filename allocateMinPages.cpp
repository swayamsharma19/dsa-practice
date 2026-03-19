#include<iostream>
#include<vector>
#include <algorithm> // for *maxElement
#include <numeric>  // for accumulate 
using namespace std;

class Solution
{
public:
    int noPages(vector<int> &arr, int pages)
    {
        int n = arr.size();
        int sum = 0;
        int student = 1;

        for (int i = 0; i < n; i++)
        {
            if (sum + arr[i] > pages)
            {
                student++;
                sum = arr[i];
            }
            else
            {
                sum += arr[i];
            }
        }

        return student;
    }
    int findPages(vector<int> &arr, int k)
    {
        if (k > arr.size())
            return -1;

        int result = -1;

        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int pages = noPages(arr, mid);

            if (pages <= k)
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return result;
    }
};