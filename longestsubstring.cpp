class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int l = 0, r = 0, maxLen = 0;
        int hash[256]; // store position of the char

        for (int i = 0; i < 256; i++)
        {
            hash[i] = -1;
        }

        while (r < n)
        {
            if (hash[s[r]] != -1)
            {
                l = max(hash[s[r]] + 1, l); // bring the left to the right of last occurance
            }
            int len = r - l+ 1;
            maxLen = max(len, maxLen);
            hash[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};