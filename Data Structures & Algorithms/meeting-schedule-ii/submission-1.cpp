/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        
          if(intervals.size()<=1)
          {
            return intervals.size();
          }
            sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
            return a.start < b.start;
        });
          priority_queue<int,vector<int>,greater<int>>minheap;
          for(auto interval:intervals)
          {
                 if(!minheap.empty() && minheap.top() <= interval.start)
                 {    
                       minheap.pop();
                 } 
                 minheap.push(interval.end);
          }
          return minheap.size();
          
    }
};
