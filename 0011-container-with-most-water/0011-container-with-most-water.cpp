class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;
        while(left < right)
        {
            int width = right - left;
            int curr_height = min(height[left] , height[right]);
            int cur_area = curr_height * width;
            area = max(area , cur_area);
            if(height[left] < height[right])
            {
                left++;
            }
            else{
                right-- ;
            }
        }
        return area;
    }
};