class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({intervals[i][0], i});
        }

        sort(v.begin(), v.end());

        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            int target = intervals[i][1];

            int low = 0, high = n - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (v[mid].first >= target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            if (low < n)
                ans[i] = v[low].second;
        }

        return ans;
    }
};