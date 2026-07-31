class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        int n = word.length();
        for(int i = 0;i<n;i++)
        {
            if(isupper(word[i])){
                upper++;
            }
        }
        return upper == n || upper == 0 || (upper == 1 &&isupper(word[0]) );
    }
};