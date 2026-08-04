class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxm = INT_MIN;
        int minm = INT_MAX;
        unordered_set<int> st;

        for(int x : nums)
        {
            minm = min(minm,x);
            maxm = max(maxm,x);

            st.insert(x);
        }
        vector<int> ans;
        for(int i = minm +1;i<maxm;i++)
        {
            if(!st.count(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};