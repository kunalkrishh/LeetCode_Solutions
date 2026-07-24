class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int front = 0,end=n-1;
        int index = n-1;
        while(front<=end)
        {
            if(abs(nums[front])>abs(nums[end]))
            {
                result[index] = nums[front]*nums[front];
                front++;
            }
            else{
                result[index] = nums[end]*nums[end];
                end--;
            }
            index--;
        }
        return result;
    }
};