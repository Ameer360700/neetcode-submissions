class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int end=INT_MIN;
        int count=0;
        for(const auto& interval:intervals)
        {
             if(end>interval[0])
             {
                 count++;
                 end=min(end,interval[1]);
             }
             else
             {
                end=interval[1];
             }
        }
        return count;
    }
};
