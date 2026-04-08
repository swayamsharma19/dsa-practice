#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int siz = nums.size();

        vector<int> neg;
        vector<int> pos;

        // split into neg and pos
        for (int i = 0; i < siz; i++)
        {
            if (nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        // only positive
        if (neg.size() == 0)
        {
            for (int i = 0; i < pos.size(); i++)
            {
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }

        // only negative
        if (pos.size() == 0)
        {
            for (int i = 0; i < neg.size(); i++)
            {
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());
            return neg;
        }

        int n = neg.size();
        int m = pos.size();

        // square both arrays
        for (int i = 0; i < n; i++)
        {
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());

        for (int i = 0; i < m; i++)
        {
            pos[i] = pos[i] * pos[i];
        }

        // merge step
        int i = 0, j = 0;
        vector<int> res;

        while (i < n && j < m)
        {
            if (neg[i] <= pos[j])
            {
                res.push_back(neg[i]);
                i++;
            }
            else
            {
                res.push_back(pos[j]);
                j++;
            }
        }

        while (i < n)
        {
            res.push_back(neg[i]);
            i++;
        }

        while (j < m)
        {
            res.push_back(pos[j]);
            j++;
        }

        return res;
    }
};