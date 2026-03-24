#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void helper(string digits, vector<string>& ans, string& output, int idx, string mapping[]) {
        if(idx == digits.length()) {
            ans.push_back(output);
            return;
        }

        int num = digits[idx] - '0';
        string val = mapping[num];

        for(int i = 0; i < val.length(); i++) {
            output.push_back(val[i]);
            helper(digits, ans, output, idx + 1, mapping);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if(digits.empty()) return ans;   // 🔥 important fix

        string output; 
        int idx = 0;

        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        helper(digits, ans, output, idx, mapping);
        return ans;
    }
};