class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
        {
            return false;
        }
        string y = s+s;
        if(y.find(goal) != string::npos)
        {
            return true;
        }
        else{
            return false;
        }
    }
};