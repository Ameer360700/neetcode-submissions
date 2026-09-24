class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char,int>positions;
        for(int i=0;i<order.size();i++)
        {
            positions[order[i]] = i;
        }
        for(int i=0;i<words.size()-1;i++)
        {
           
            int minlengthword=min(words[i].size(),words[i+1].size());
            bool founddifference=false;
            for(int j=0;j<minlengthword;j++)
            {
                char c1=words[i][j];
                char c2=words[i+1][j];
                if(c1==c2)
                {
                    continue;
                }
                else 
                {
                    if(positions[c1]<positions[c2])
                    {
                       founddifference=true;
                       break;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if(!founddifference && words[i].size() > words[i+1].size())
            {
                return false;
            }

        }
        return true;
    }
};