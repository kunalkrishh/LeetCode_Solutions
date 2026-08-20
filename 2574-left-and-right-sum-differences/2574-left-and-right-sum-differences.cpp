class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for(int x : nums)
        {
            total += x;
        }
        vector<int> ans;
        int left_sum = 0;
        for(int x : nums)
        {
            int ryt_sum = total - left_sum - x;
            ans.push_back(abs(left_sum - ryt_sum));
            left_sum += x;
        }
        return ans;
    }
};