class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // This map will store: number -> next greater number
        unordered_map<int, int> nextGreater;

        // Stack to help find next greater elements
        stack<int> st;

        // Step 1: Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            
            int current = nums2[i];

            // Remove elements from stack that are smaller or equal
            while (!st.empty() && st.top() <= current) {
                st.pop();
            }

            // If stack is empty, no greater element exists
            if (st.empty()) {
                nextGreater[current] = -1;
            } 
            else {
                nextGreater[current] = st.top();
            }

            // Push current element into stack
            st.push(current);
        }

        // Step 2: Build result for nums1 using the map
        vector<int> result;

        for (int i = 0; i < nums1.size(); i++) {
            int value = nums1[i];
            result.push_back(nextGreater[value]);
        }

        return result;
    }
};