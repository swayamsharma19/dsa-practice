class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;

        // Step 1: sort intervals
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); i++)
        {
            // Agar ans empty hai ya overlap nahi hai
            if (ans.empty() || ans.back()[1] < intervals[i][0])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                // Merge karo
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }
};