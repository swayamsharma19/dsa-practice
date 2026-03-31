#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;

        while (i >= 0) {
            // skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            int end = i;

            // find start of word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            string word = s.substr(i + 1, end - i);

            // add space only if needed
            if (!ans.empty()) {
                ans += ' ';
            }

            ans += word;
        }

        return ans;
    }
};