class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen = 1;
        int start = 0;
        int low,high;
        for(int i=1;i<s.length();i++)
        {   
            low = i-1;
            high = i;
            while(low>=0 && high<s.length() && s[low] == s[high])
            {
                if((high-low+1) > maxlen)
                {
                    maxlen = high - low +1;
                    start = low;
                }
                low--;
                high++;
            }
            low = i-1;
            high = i+1;
            while(low>=0 && high<s.length() && s[low] == s[high])
            {
                if((high-low+1) > maxlen)
                {
                    maxlen = high - low +1;
                    start = low;
                }
                low--;
                high++;
            }
        }
        
        return s.substr(start,maxlen);
    }
};