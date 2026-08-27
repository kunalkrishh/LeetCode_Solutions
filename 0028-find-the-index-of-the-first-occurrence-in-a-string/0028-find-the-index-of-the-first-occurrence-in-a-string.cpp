class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int x = n - m;
        for(int i = 0; i <= x ; i++)
        {
            int j = 0;
            while(j < m && haystack[i+j] == needle[j])
            {
                j++;
            }
            if(j == m)
            {
                return i;
            }
        }
        return -1;
    }
};