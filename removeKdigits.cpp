class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string st;

        for (int i = 0; i < num.size(); i++)
        {
            char digit = num[i];

            while (!st.empty() && k > 0 && st.back() > digit)
            {
                st.pop_back();
                k--;
            }
            st.push_back(digit);
        }

        while (k > 0 && !st.empty())
        {
            st.pop_back();
            k--;
        }

        int i = 0;
        while (i < st.size() && st[i] == '0')
        {
            i++;
        }

        string ans = st.substr(i);

        // FIX HERE
        return ans == "" ? "0" : ans;
    }
};