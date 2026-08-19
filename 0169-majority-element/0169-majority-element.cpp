class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int count = 0;
        for(int n : nums)
        {
            if(count == 0)
            {
                majority = n;
            }

            if(n == majority)
            {
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};