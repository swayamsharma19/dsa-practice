#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string &s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }

    void helper(string &s, vector<vector<string>>& ans, vector<string>& ds, int idx) {
        if(idx == s.length()) {
            ans.push_back(ds);
            return;
        }

        for(int i = idx; i < s.length(); i++) {
            if(isPalindrome(s, idx, i)) {         
                ds.push_back(s.substr(idx, i - idx + 1));
                helper(s, ans, ds, i + 1);   // fixed
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        helper(s, ans, ds, 0);
        return ans;
    }
};