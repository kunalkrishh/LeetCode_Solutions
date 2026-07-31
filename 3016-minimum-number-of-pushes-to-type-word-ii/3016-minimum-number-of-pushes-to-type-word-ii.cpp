class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int freq[26] = {0};
        for(char c : word)
        {
            int ind = c - 'a';
            freq[ind]++;
        }
        sort(freq,freq+26);
        int index = 0;
        int push = 0;
        for(int i = 25;i>=0;i--)
        {
            push += (index/8+1)*freq[i];
            index++;
        }
        return push;
    }
};