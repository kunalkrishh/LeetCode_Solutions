class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        vector<long long> pre(n+1,0);
        for(int i = 0;i<n;i++)
        {
            pre[i+1] = pre[i] + nums[i];
        }
        return mergeSort(pre,0,n+1,lower,upper);

    }
    int mergeSort(vector<long long>& sum,int left,int right,int lower,int upper)
    {
        if(right - left <= 1)
        return 0;
        int mid = left+(right-left) /2;
        int count = mergeSort(sum,left,mid,lower,upper) + mergeSort(sum,mid,right,lower,upper);
        int j = mid,k=mid;
        for (int i = left; i < mid; i++) {
            while (j < right && sum[j] - sum[i] < lower)
                j++;

            while (k < right && sum[k] - sum[i] <= upper)
                k++;

            count += k - j;
        }

        inplace_merge(sum.begin() + left,
                      sum.begin() + mid,
                      sum.begin() + right);

        return count;
    }
};