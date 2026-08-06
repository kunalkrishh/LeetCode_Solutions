class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(true)
        {
            int x = n;
            int prod = 1;
            while(x>0)
            {
                int y = x%10;
                prod *= y;
                x/=10;
            }
            if(prod %t == 0)
            {
                return n;
            }
            else{
                n++;
            }
        }
    }
};