class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true;
        bool dec = true;
        int n = nums.size();
        for(int i = 0 ; i <= n - 2 ; i++)
        {
            if(nums[i] < nums[i+1])
            {
                dec = false;
            }
        }
        for(int i = 0 ;i <= n - 2 ; i++)
        {
            if(nums[i] > nums[i+1])
            {
                inc = false;
            }
        }
        if(inc == true || dec == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};