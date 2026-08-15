class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;
        int cntzero = 0;
        for(int i : nums)
        {
            xorr ^= i;
            if(i == 0)
            {
                cntzero++;
            }
        }
        if(xorr != 0)
        {
            return n;
        }
        if(cntzero == n)
        {
            return 0;
        }
        return n-1;
    }
};