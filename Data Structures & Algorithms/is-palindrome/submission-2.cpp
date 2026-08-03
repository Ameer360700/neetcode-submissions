class Solution {
public:
    bool isPalindrome(string s) {

        string str;
        for(char c:s)
        {
            if(('A'<=c && c<='Z') || ('a'<=c && c<='z') || ('0'<=c && c<='9'))
            {
                if('A'<=c && c<='Z')
                {
                    c=tolower(c);
                }
                str.push_back(c);
            }
        }
        int i=0;
        int n=str.size();
        int j=n-1;
        while(i<=j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};
