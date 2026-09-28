class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

          if(intervals.empty())
          {
             return {newInterval};
          }
          int n=intervals.size();
          int target=newInterval[0];
          int left=0;
          int right=n-1;
          while(left<=right)
          {
              int mid=(left+right)/2;
              if(target<intervals[mid][0])
              {
                    right=mid-1;
              }
              else
              {
                  left=mid+1;
              }
          }
          intervals.insert(intervals.begin()+left,newInterval);
          vector<vector<int>>res;
          for(const auto& interval:intervals)
          {
              if(res.empty()|| res.back()[1]<interval[0])
              {
                 res.push_back(interval);
              }
              else
              {
                 res.back()[1]=max(res.back()[1],interval[1]);
              }
          }
          return res;

    }
};
