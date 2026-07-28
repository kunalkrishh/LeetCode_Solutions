class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int freqq[26]={0};
        for(int i = 0;i<n/2;i++)
        {
            freqq[s[i]-'a']++;
        }
        int index = 0;
        for(int i = 0;i<26;i++)
        {
            while(freqq[i]> 0)
            {
                s[index++]=char(i+'a');
                freqq[i]--;
            }
        }
        for(int i = 0;i<n/2;i++)
        {
            s[n-1-i]=s[i];
        }
        return s;
    }
};