class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        if(x<0)
        {
            return false;
        }
        
        int original=x;
            while(x!=0)
            {
               reverse=reverse*10 +x%10;
                x=x/10;
            }
        
        if(reverse==original)
        {
            return true;
        }
        return false;
    }
};