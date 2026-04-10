class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            // opening brackets
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                // Stack empty -> invalid
                if (st.empty())
                    return false;

                char top = st.top();

                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        // final check
        return st.empty();
    }
};